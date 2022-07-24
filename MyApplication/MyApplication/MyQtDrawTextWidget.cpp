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
		simple(); //方式1：简单文本的绘制
	}
	else if (paintType == 1)
	{
		wrap();//方式2：换行文本的绘制
	}
	else 
	{
		dynamic();//方式3：根据文本内容动态绘制内容	
	}
}
//方式1：简单文本的绘制
void MyQtDrawTextWidget::simple()
{
	QPainter* painter = new QPainter(this);
	//step1：设置画笔颜色
	QPen pen(QColor(0xff, 0x00, 0xff));
	painter->setPen(pen);
	//step2: 设置字体
	QFont font("Times", 16, QFont::Bold, true);
	painter->setFont(font);

	painter->drawText(0, 0, width(), height(), Qt::AlignLeft | Qt::AlignTop,
		/*GBK::toUnicode("Qt,你好"));*/
		u8"Qt,你好");
}

//方式2：换行文本的绘制
void MyQtDrawTextWidget::wrap()
{
	QPainter* painter = new QPainter(this);
	//step1：设置画笔颜色
	QPen pen(QColor(0xff, 0x00, 0x00));
	painter->setPen(pen);
	//step2: 设置字体
	QFont font("Times", 16, QFont::Normal, true);
	painter->setFont(font);

	//step3:设置绘制区域
	int width = this->width();
	int height = this->height();
	QRect rect(0,0, width,height-60);

	//step:设置绘制内容
	QString longContent = u8"Qt [1]  是一个1991年由Qt Company开发的跨平台C++图形用户界面应用程序开发框架。它既可以开发GUI程序，也可用于开发非GUI程序，比如控制台工具和服务器。Qt是面向对象的框架，使用特殊的代码生成扩展（称为元对象编译器(Meta Object Compiler, moc)）以及一些宏，Qt很容易扩展，并且允许真正地组件编程。2008年，Qt Company科技被诺基亚公司收购，Qt也因此成为诺基亚旗下的编程语言工具。2012年，Qt被Digia收购。2014年4月，跨平台集成开发环境Qt Creator 3.1.0正式发布，实现了对于iOS的完全支持，新增WinRT、Beautifier等插件，废弃了无Python接口的GDB调试支持，集成了基于Clang的C / C++代码模块，并对Android支持做出了调整，至此实现了全面支持iOS、Android、WP, 它提供给应用程序开发者建立艺术级的图形用户界面所需的所有功能。基本上，Qt 同 X Window 上的 Motif，Openwin，GTK 等图形界面库和 Windows 平台上的 MFC，OWL，VCL，ATL 是同类型的东西。";
	
	//step:设置绘制方式，换行
	QTextOption textOption;
	textOption.setWrapMode(QTextOption::WrapAnywhere);	
	painter->drawText(rect, longContent, textOption);
		
}
//方式3：根据文本内容动态绘制内容
void MyQtDrawTextWidget::dynamic()
{
	QPainter* painter = new QPainter(this);
	//step1：设置画笔颜色
	QPen pen(QColor(0x00, 0xff, 0x00));

	painter->setPen(pen);
	//step2: 设置字体
	QFont font("Times", 16, QFont::Normal, true);
	painter->setFont(font);	

	//step3:设置内容
	QString longContent = u8"广义的学习是指人与动物在生活过程中凭借经验产生的行为或行为潜能的相对持久的变化。次广义的学习指人类的学习。狭义的学习专指学生的学习。根据不同的标准，学习可以分为不同的类别，主要介绍加涅的学习层次分类、学习结果分类和我国心理学家冯忠良的分类。";
		
	int width = this->width();
	int height = this->height();
	//step:测试绘制内容的宽度
	QFontMetrics metric(font);
	QRect boundingRect = metric.boundingRect(0, 0, width, 40,
		Qt::AlignVCenter | Qt::AlignHCenter,
		longContent);

	if (boundingRect.width()<= width) 
	{
		//绘制内容小于控件宽度，直接绘制
		painter->drawText(0, 0, width, height,
			Qt::AlignTop | Qt::AlignLeading,
			longContent);
	}
	else 
	{
		//绘制内容大于控件宽度，直接绘制
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