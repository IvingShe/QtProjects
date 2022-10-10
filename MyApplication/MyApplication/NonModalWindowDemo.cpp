#include "NonModalWindowDemo.h"

NonModalWindowDemo::NonModalWindowDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	mpSearchWindow = new SearchWindow(this);
	//�Զ������ڵ���ʽչʾ�����������а������⣬��󻯣���С���Լ��رհ�ť��
	mpSearchWindow->setWindowFlag(Qt::Window);

	connect(ui.startBtn, SIGNAL(clicked()), this, SLOT(onStartSearch()));

	//���������а�ť�ź��뱾��Ĳۺ�������
	//���ǲ����ƻ��˵���ķ�װ��
	connect(mpSearchWindow->ui.btnSearch, SIGNAL(clicked()), this, SLOT(onSearch()));
}

NonModalWindowDemo::~NonModalWindowDemo()
{
}

void NonModalWindowDemo::onStartSearch()
{
	//չʾ��ģ̬����
	mpSearchWindow->show();
}

void NonModalWindowDemo::onSearch()
{
	//�����������е����ݻ�ȡ��������ʾ�ڱ���չʾ�ؼ���
	QString content=	mpSearchWindow->ui.textLlineEdit->text();
	ui.contentText->appendPlainText(content);
}