#pragma once

#include <QThread>
/*
*线程演示类
*/
class FileSenderThread  : public QThread
{
	Q_OBJECT

public:
	FileSenderThread(QObject *parent);
	
	~FileSenderThread();
	/*
	*开始任务
	*/
	void create(const char* fileName);
	
	/**
	*消毁线程
	*/
	void destory();

	/*
	*获取状态
	*/
	int getStatus();

	/*
    *获取进度
   */
	int getProgress();

	void run(); //线程入口函数，线程执行体

private:
	char m_fileName[128] /*= {0}*/;
	int m_fileSize = 0; //文件大小 
	int m_bytesRead = 0;//文件已读大小 
	int m_status = 0; //任务状态 -1 异常，0，进行中， 1，完成
};
