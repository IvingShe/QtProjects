#include "FileSenderThread.h"
#include<QDebug>
#include<string.h>

FileSenderThread::FileSenderThread(QObject *parent)
	: QThread(parent)
{
	for (int i = 0; i < 128;  i++) 
	{
		qDebug() <<"#FileSenderThread#"<< m_fileName[i];
	}
}

/*
*��ʼ����
*/
void FileSenderThread::create(const char* fileName)
{
	strcpy(m_fileName, fileName);//strcpy ,�ַ���copy����
	m_bytesRead = 0;
	m_fileSize = 0;
	m_status = 0;

	start(); //��ʼ�̣߳�
}
/**
	*�����߳�
	*/
void FileSenderThread::destory()
{
	wait();//??? Ϊɶ �߳���Ҫ�˺�����
}

FileSenderThread::~FileSenderThread()
{
	qDebug() << "#~FileSenderThread()#";
}

int FileSenderThread::getStatus()
{
	return m_status;
}

int FileSenderThread::getProgress()
{
	if (m_fileSize==0) {
		return 0;
	}
	return m_bytesRead * 100 / m_fileSize;
}

//�߳���ں������߳�ִ����
void FileSenderThread::run()//
{
	FILE* fp = fopen(m_fileName,"rb");

	//�ļ���ʧ��
	if (!fp) {
		m_status = -1;
		return;
	}

	//��ȡ�ļ���С 
	fseek(fp,0,SEEK_END);
	m_fileSize = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	char buf[256];
	while (1)
	{
		int n = fread(buf,1,256,fp);
		if (n<=0) {
			break;
		}
		m_bytesRead += n;
		QThread::msleep(100);//����1�룬ģ�⴫�����
		qDebug() << "m_bytesRead="<< m_bytesRead;
	}
	fclose(fp);
	m_status = 1;
}