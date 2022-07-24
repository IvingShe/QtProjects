#include "MyQtDrawTextWidget.h"
#include <QPainter>
//#include <GBK>
MyQtDrawTextWidget::MyQtDrawTextWidget(QWidget *parent)
	: QWidget(parent), paintType(0)
{
	ui.setupUi(this);
	connect(ui.btnSimple, SIGNAL(clicked()), this, SLOT(onSlotSimpleBtnClicked()));
	connect(ui.btnWap, SIGNAL(clicked()), this, SLOT(onSlotWrapBtnClicked()));
	connect(ui.btnDynamic, SIGNAL(clicked()), this, SLOT(onSlotDynmicBtnClicked()));
}

MyQtDrawTextWidget::~MyQtDrawTextWidget()
{

}

void MyQtDrawTextWidget::onSlotDynmicBtnClicked()
{
	paintType = 3;
	update();
}
void MyQtDrawTextWidget::onSlotWrapBtnClicked()
{
	paintType = 1;
	update();
}
void MyQtDrawTextWidget::onSlotSimpleBtnClicked()
{
	paintType = 0;
	update();
}

void MyQtDrawTextWidget::paintEvent(QPaintEvent *event)
{
	if (paintType==0) 
	{
		simple(); //��ʽ1�����ı��Ļ���
	}
	else if (paintType == 1)
	{
		wrap();//��ʽ2�������ı��Ļ���
	}
	else 
	{
		dynamic();//��ʽ3�������ı����ݶ�̬��������	
	}
}
//��ʽ1�����ı��Ļ���
void MyQtDrawTextWidget::simple()
{
	QPainter* painter = new QPainter(this);
	//step1�����û�����ɫ
	QPen pen(QColor(0xff, 0x00, 0xff));
	painter->setPen(pen);
	//step2: ��������
	QFont font("Times", 16, QFont::Bold, true);
	painter->setFont(font);

	painter->drawText(0, 0, width(), height(), Qt::AlignLeft | Qt::AlignTop,
		/*GBK::toUnicode("Qt,���"));*/
		u8"Qt,���");
}

//��ʽ2�������ı��Ļ���
void MyQtDrawTextWidget::wrap()
{
	QPainter* painter = new QPainter(this);
	//step1�����û�����ɫ
	QPen pen(QColor(0xff, 0x00, 0x00));
	painter->setPen(pen);
	//step2: ��������
	QFont font("Times", 16, QFont::Normal, true);
	painter->setFont(font);

	//step3:���û�������
	int width = this->width();
	int height = this->height();
	QRect rect(0,0, width,height-60);

	//step:���û�������
	QString longContent = u8"Qt [1]  ��һ��1991����Qt Company�����Ŀ�ƽ̨C++ͼ���û�����Ӧ�ó��򿪷���ܡ����ȿ��Կ���GUI����Ҳ�����ڿ�����GUI���򣬱������̨���ߺͷ�������Qt���������Ŀ�ܣ�ʹ������Ĵ���������չ����ΪԪ���������(Meta Object Compiler, moc)���Լ�һЩ�꣬Qt��������չ���������������������̡�2008�꣬Qt Company�Ƽ���ŵ���ǹ�˾�չ���QtҲ��˳�Ϊŵ�������µı�����Թ��ߡ�2012�꣬Qt��Digia�չ���2014��4�£���ƽ̨���ɿ�������Qt Creator 3.1.0��ʽ������ʵ���˶���iOS����ȫ֧�֣�����WinRT��Beautifier�Ȳ������������Python�ӿڵ�GDB����֧�֣������˻���Clang��C / C++����ģ�飬����Android֧�������˵���������ʵ����ȫ��֧��iOS��Android��WP, ���ṩ��Ӧ�ó��򿪷��߽�����������ͼ���û�������������й��ܡ������ϣ�Qt ͬ X Window �ϵ� Motif��Openwin��GTK ��ͼ�ν����� Windows ƽ̨�ϵ� MFC��OWL��VCL��ATL ��ͬ���͵Ķ�����";
	
	//step:���û��Ʒ�ʽ������
	QTextOption textOption;
	textOption.setWrapMode(QTextOption::WrapAnywhere);	
	painter->drawText(rect, longContent, textOption);
		
}
//��ʽ3�������ı����ݶ�̬��������
void MyQtDrawTextWidget::dynamic()
{
	QPainter* painter = new QPainter(this);
	//step1�����û�����ɫ
	QPen pen(QColor(0x00, 0xff, 0x00));

	painter->setPen(pen);
	//step2: ��������
	QFont font("Times", 16, QFont::Normal, true);
	painter->setFont(font);	

	//step3:��������
	QString longContent = u8"�����ѧϰ��ָ���붯�������������ƾ�辭���������Ϊ����ΪǱ�ܵ���Գ־õı仯���ι����ѧϰָ�����ѧϰ�������ѧϰרָѧ����ѧϰ�����ݲ�ͬ�ı�׼��ѧϰ���Է�Ϊ��ͬ�������Ҫ���ܼ�����ѧϰ��η��ࡢѧϰ���������ҹ�����ѧ�ҷ������ķ��ࡣ";
		
	int width = this->width();
	int height = this->height();
	//step:���Ի������ݵĿ��
	QFontMetrics metric(font);
	QRect boundingRect = metric.boundingRect(0, 0, width, 40,
		Qt::AlignVCenter | Qt::AlignHCenter,
		longContent);

	if (boundingRect.width()<= width) 
	{
		//��������С�ڿؼ���ȣ�ֱ�ӻ���
		painter->drawText(0, 0, width, height,
			Qt::AlignTop | Qt::AlignLeading,
			longContent);
	}
	else 
	{
		//�������ݴ��ڿؼ���ȣ�ֱ�ӻ���
		for (int i= longContent.length()-1;i>0;i--)
		{
			QString  subStr = longContent.left(i); 
			QString showText = subStr.append("...");

			QRect boundingRect2Show = metric.boundingRect(0, 0, width, 40,
				Qt::AlignVCenter | Qt::AlignHCenter,
				showText);
			if (boundingRect2Show.width()< width)
			{
				painter->drawText(0, 0, width, height,
					Qt::AlignTop | Qt::AlignLeading,
					showText);
				break;
			}

		}
	
	}

}