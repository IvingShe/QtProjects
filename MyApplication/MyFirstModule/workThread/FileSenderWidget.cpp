#include "FileSenderWidget.h"
#include<QDebug>
#include <QFileDialog> 
FileSenderWidget::FileSenderWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.btnSelect, SIGNAL(clicked()), this, SLOT(onSelectFile()));
	connect(ui.btnSender, SIGNAL(clicked()), this, SLOT(onSend()));
}

FileSenderWidget::~FileSenderWidget()
{

}

void FileSenderWidget::onSelectFile()
{
	qDebug() << "onSelectFile";
	QString filePath = QFileDialog::getOpenFileName(this, u8"Ñ¡ÔñÎÄ¼þ");
	if (filePath.length() > 0)
	{
		ui.lineEdit->setText(filePath);
	}
}

void FileSenderWidget::onSend()
{
	SendProgressDlg dlg;
	dlg.exec();
}
