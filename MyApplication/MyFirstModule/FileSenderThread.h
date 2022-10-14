#pragma once

#include <QThread>
/*
*�߳���ʾ��
*/
class FileSenderThread  : public QThread
{
	Q_OBJECT

public:
	FileSenderThread(QObject *parent);
	
	~FileSenderThread();
	/*
	*��ʼ����
	*/
	void create(const char* fileName);
	
	/**
	*�����߳�
	*/
	void destory();

	/*
	*��ȡ״̬
	*/
	int getStatus();

	/*
    *��ȡ����
   */
	int getProgress();

	void run(); //�߳���ں������߳�ִ����

private:
	char m_fileName[128] /*= {0}*/;
	int m_fileSize = 0; //�ļ���С 
	int m_bytesRead = 0;//�ļ��Ѷ���С 
	int m_status = 0; //����״̬ -1 �쳣��0�������У� 1�����
};
