#pragma once

#include  <QDialog>
#include "ui_SendProgressDlg.h"
#include "../FileSenderThread.h"

class SendProgressDlg : public QDialog
{
	Q_OBJECT

public:
	SendProgressDlg(QWidget *parent = Q_NULLPTR);
	~SendProgressDlg();

	void startFileTransport(const QString & file);


protected:
	/*
	*定时器事件
	*/
	virtual void timerEvent(QTimerEvent *event);

private:
	Ui::SendProgressDlg ui;
	FileSenderThread* m_senderThread;
	int m_TimerId=-1;
};
