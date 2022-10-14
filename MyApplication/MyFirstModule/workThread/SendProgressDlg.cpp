#include "SendProgressDlg.h"
#include<QDebug>

SendProgressDlg::SendProgressDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_senderThread = new FileSenderThread(Q_NULLPTR);
	//������ʱ����ÿ500�����ȡ��ʱ��Ϣ
	m_TimerId = startTimer(500);
}

SendProgressDlg::~SendProgressDlg()
{
}

void SendProgressDlg::startFileTransport(const QString & file)
{
	m_senderThread->create(file.toStdString().c_str());	
}

/*
*��ʱ���¼�
*/
void SendProgressDlg::timerEvent(QTimerEvent *event)
{
	qDebug() << "#timerEvent#";
	if (event->timerId()==m_TimerId) 
	{
		int status = m_senderThread->getStatus();
		int progress =m_senderThread->getProgress();
		ui.progressBar->setValue(progress);
		qDebug() << "progress="<< progress;
		if (status==1)
		{
			this->accept();//���ٶԻ��� 
			killTimer(m_TimerId);//�رն�ʱ��ʱ ��

			//���� �߳�
			m_senderThread->destory();
			delete m_senderThread;
			m_senderThread = nullptr;
		}

	}
}