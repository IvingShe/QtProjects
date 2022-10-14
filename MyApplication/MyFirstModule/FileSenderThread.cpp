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
*开始任务
*/
void FileSenderThread::create(const char* fileName)
{
	strcpy(m_fileName, fileName);//strcpy ,字符串copy函数
	m_bytesRead = 0;
	m_fileSize = 0;
	m_status = 0;

	start(); //开始线程；
}
/**
	*消毁线程
	*/
void FileSenderThread::destory()
{
	wait();//??? 为啥 线程需要此函数。
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

//线程入口函数，线程执行体
void FileSenderThread::run()//
{
	FILE* fp = fopen(m_fileName,"rb");

	//文件打开失败
	if (!fp) {
		m_status = -1;
		return;
	}

	//获取文件大小 
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
		QThread::msleep(100);//休眠1秒，模拟传输过程
		qDebug() << "m_bytesRead="<< m_bytesRead;
	}
	fclose(fp);
	m_status = 1;
}