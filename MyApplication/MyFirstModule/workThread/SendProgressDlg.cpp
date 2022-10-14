#include "SendProgressDlg.h"
#include<QDebug>

SendProgressDlg::SendProgressDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_senderThread = new FileSenderThread(Q_NULLPTR);
	//开启定时器，每500毫秒获取定时消息
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
*定时器事件
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
			this->accept();//消毁对话框 
			killTimer(m_TimerId);//关闭定时定时 器

			//消毁 线程
			m_senderThread->destory();
			delete m_senderThread;
			m_senderThread = nullptr;
		}

	}
}