#include <QMessageBox>
#include <QDebug>
#include "QtMainWidget.h"
#include "MyQLabel.h"
#include "Threads/MyTimer.h"
#include "DLLFirstDemoClass.h"
QtMainWidget::QtMainWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	/***********************************************************/
	//left part:
	
	connect(ui.btnFirstWidgetByManal, SIGNAL(clicked()), this, SLOT(onSlotFirstWidgetDemo()));
	connect(ui.btnFirstLayoutByManal, SIGNAL(clicked()), this, SLOT(onSlotFirstLayoutDemo()));

	connect(ui.btnAddWidgetByCode, SIGNAL(clicked()), this, SLOT(onSlotAddWidgetByCode()));
	connect(ui.mpToolButton, SIGNAL(clicked()), this, SLOT(onSlotHelp())); 
	connect(ui.mpBtnLabel, SIGNAL(clicked()), this, SLOT(onSlotQLabel()));
	connect(ui.btnQTabWidget, SIGNAL(clicked()), this, SLOT(onSlotQTabWidget()));	
	connect(ui.btnQTabManual, SIGNAL(clicked()), this, SLOT(onSlotQTabWidgetManual()));
	connect(ui.btnQStackWidget, SIGNAL(clicked()), this, SLOT(onSlotQStackedWidget()));
	connect(ui.mpBtnListWidget, SIGNAL(clicked()), this, SLOT(onSlotQListWidget()));
	//
	connect(ui.btnComboBox, SIGNAL(clicked()), this, SLOT(onSlotQComboBox()));

	connect(ui.btnQListWidgetByModelView, SIGNAL(clicked()), this, SLOT(onSlotQListWidgetByModelView()));	
	connect(ui.btnQListWidgetByDelegate, SIGNAL(clicked()), this, SLOT(onSlotQListWidgetMVViaDelegate()));

	bool succes =connect(ui.btnModelView, SIGNAL(clicked()), this, SLOT(onSlotModelView()));

	/***********************************************************/
	//right part: QListWidget

	QListWidgetItem* item = new QListWidgetItem(u8"自定义Widget:黑色的圆");
	item->setData(Qt::UserRole, 1); 
	ui.listWidget->addItem(item);

    item = new QListWidgetItem(u8"使用自定义Widget(黑色的圆)");
	item->setData(Qt::UserRole, 2);
	ui.listWidget->addItem(item);

	item = new QListWidgetItem(u8"自定义Widget:具有QPen和QBrush参数的Painter");
	item->setData(Qt::UserRole, 3);
	ui.listWidget->addItem(item);

	item = new QListWidgetItem(u8"自定义Widget:简单的动画实现");
	item->setData(Qt::UserRole, 4);
	ui.listWidget->addItem(item);

	item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, u8"自定义Widget:绘制文字");
	item->setData(Qt::UserRole, 5); 
	ui.listWidget->addItem(item);

	item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, u8"自定义Widget:绘制图片QPixmap");
	item->setData(Qt::UserRole, 6);
	ui.listWidget->addItem(item);

	item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, u8"自定义Widget:使用鼠标事件");
	item->setData(Qt::UserRole, 7);
	ui.listWidget->addItem(item);


	item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, u8"使用原位编辑");
	item->setData(Qt::UserRole, 8);
	ui.listWidget->addItem(item);


	item = new QListWidgetItem(); 
	item->setData(Qt::DisplayRole, u8"QListWidget使用上下文菜单"); 
	item->setData(Qt::UserRole, 9); 
	ui.listWidget->addItem(item);

	item = new QListWidgetItem();
	//QListWidget QTreeWidget QTableWidget
	//QListWigdetItem QTreeWidgetItem  QTableWidgetItem;
	item->setData(Qt::DisplayRole, u8"QTreeWidget的使用");
	item->setData(Qt::UserRole, 10);
	ui.listWidget->addItem(item);

	item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, u8"QTableWidget的使用");
	item->setData(Qt::UserRole, 11);
	ui.listWidget->addItem(item);

	item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, u8"QTreeWidget的使用:自定义Item1");
	item->setData(Qt::UserRole, 12);
	ui.listWidget->addItem(item);


	item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, u8"QTreeWidget的使用:自定义Item2");
	item->setData(Qt::UserRole, 13);
	ui.listWidget->addItem(item);

	/*item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, u8"定时器");
	item->setData(Qt::UserRole, 14);
	ui.listWidget->addItem(item);*/
	addQListWidgetItem(u8"定时器", 14);
	addQListWidgetItem(u8"字符集及编辑示例：QString", 15);
	addQListWidgetItem(u8"工作线程实例（子模块MyFirstModule中）", 16);
	addQListWidgetItem(u8"Shared Library 调用（子模块MyDLLModule中）", 17);
	addQListWidgetItem(u8"QObject对象树parent自析造演示", 18);
	connect(ui.listWidget, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(onSlotItemClick(QListWidgetItem *)));
}

void QtMainWidget::addQListWidgetItem(const QString text, int role)
{
	QListWidgetItem* item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, text);
	item->setData(Qt::UserRole, role);
	ui.listWidget->addItem(item);
}

QtMainWidget::~QtMainWidget()
{
	if (pQObjectTreeTestWidget)
	{
		delete pQObjectTreeTestWidget;
		pQObjectTreeTestWidget = Q_NULLPTR;
	}

}
void QtMainWidget::onSlotFirstWidgetDemo()
{
	qDebug() << "onSlotFirstWidgetDemo";
	mMyFirstCustomWidget = new MyFirstCustomWidget(NULL);
	mMyFirstCustomWidget->show();
}

void  QtMainWidget::onSlotFirstLayoutDemo()
{
	qDebug() << "onSlotFirstLayoutDemo";
	 mQVLayoutDemoWidget=new QVLayoutDemoWidget(NULL);
	 mQVLayoutDemoWidget->setWindowTitle(u8"使用QVBoxLayout");
	 mQVLayoutDemoWidget->setGeometry(50, 50, 500, 300);
	 mQVLayoutDemoWidget->move(200, 200);
	 mQVLayoutDemoWidget->show();	
}


void QtMainWidget::onSlotAddWidgetByCode()
{
	/***组合Widget***/
	mComplexCustomWidget = new ComplexCustomWidget(NULL);
	mComplexCustomWidget->setGeometry(50, 50, 500, 300);
	mComplexCustomWidget->move(200, 200);
	mComplexCustomWidget->show();
}

void QtMainWidget::onSlotModelView()
{
	qDebug() << "onSlotModelView";
}

void QtMainWidget::onSlotQComboBox() {
	mMyQCombobox = new MyQCombobox(NULL);
	mMyQCombobox->show();
}

void QtMainWidget::onSlotItemClick(QListWidgetItem *item)
{
	int role = item->data(Qt::UserRole).toInt();
	switch (role)
	{
	case 1:
		mMyCircle = new MyCircle(NULL);
		mMyCircle->show();
		break;
	case 2:
		mUsingMyCircleInQtDesigner = new UsingMyCircleInQtDesigner(NULL);
		mUsingMyCircleInQtDesigner->show();
		break;
	case 3:
		mMyWidgetWithQPenAndQBrush = new MyWidgetWithQPenAndQBrush(NULL);
		mMyWidgetWithQPenAndQBrush->show();
		break;		
	case 4:
		mMyQWidgetWithSimpleAnimation = new MyQWidgetWithSimpleAnimation(NULL);
		mMyQWidgetWithSimpleAnimation->show();
		break;
	case 5:
		mMyQtDrawTextWidget = new MyQtDrawTextWidget(NULL);
		mMyQtDrawTextWidget->show();
		break;
	case 6:
		mMyDrawingPictureWidget = new MyDrawingPictureWidget(NULL);
		mMyDrawingPictureWidget->show();
		break;
	case 7:		
		mQtWidgetsWithMouse = new QtWidgetsWithMouse(NULL);
		mQtWidgetsWithMouse->show();
		break;

	case 8:
		mMyEditListWidget = new MyEditListWidget(NULL);
		mMyEditListWidget->show();
		break;
	case 9:
		mMyListWidgetWithContextMenu = new MyListWidgetWithContextMenu(NULL);
		mMyListWidgetWithContextMenu->show();
		break;
	case 10:
		mMyTreeWidget = new 	MyTreeWidget(NULL);
		mMyTreeWidget->show();
		break;
	case 11:
		mMyTableWidget = new 	MyTableWidget(NULL);
		mMyTableWidget->show();
		break;
	case 12:
		mMyQTreeWidgetWithCustomItem =new MyQTreeWidgetWithCustomItem(NULL);
		mMyQTreeWidgetWithCustomItem->show();
		break;
	case 13:
		mMyQTreeWidgetWithCustomItem2 = new MyQTreeWidgetWithCustomItem2(NULL);
		mMyQTreeWidgetWithCustomItem2->show();
		break;
	case 14:		
		mMyTimer = new MyTimer(NULL);
		mMyTimer->show();
		break;
	case 15:
		mCharsetDemoWidget = new CharsetDemoWidget();
		mCharsetDemoWidget->show();
		break;
		//QListWidget QTreeWidget QTableWidget
        //QListWigdetItem QTreeWidgetItem  QTableWidgetItem;

	case 16:		
		mpFileSenderWidget = new FileSenderWidget();
		mpFileSenderWidget->show();
		break;
	case 17:
		mpFirstDll = new  DLLFirstDemoClass();
		mpFirstDll->printLog();
		break;

	case 18:
		pQObjectTreeTestWidget = new QObjectTreeTestWidget(this);	
		pQObjectTreeTestWidget->show();	
		break;

	default:
		break;
	}
}

void QtMainWidget::onSlotQListWidget() 
{
	mMyQListWidget = new MyQListWidget(NULL);
	mMyQListWidget->show();
}

void  QtMainWidget::onSlotQStackedWidget() {
	mMyQStackedWidget =new  MyQStackedWidget(NULL);
	mMyQStackedWidget->show();
}
void QtMainWidget::onSlotHelp() 
{
	QMessageBox::information(this,"help","yes");
}

void QtMainWidget::onSlotQLabel()
{
	mMyLabel =new MyQLabel(NULL);
	mMyLabel->show();
}

void QtMainWidget::onSlotQTabWidget()
{
	mMyQtTabWidget = new MyQtTabWidget(NULL);
	mMyQtTabWidget->show();
}

void QtMainWidget::onSlotQTabWidgetManual()
{
	 mMyQtTabWidget2 = new MyQtTabWidget2(NULL);
	 mMyQtTabWidget2->show();
}
void QtMainWidget::onSlotQListWidgetByModelView() {
	mMyQListWidgetByModelView = new MyQListWidgetByModelView(NULL);
	mMyQListWidgetByModelView->show();
}
void QtMainWidget::onSlotQListWidgetMVViaDelegate() {
	 mMyQListWidgetMVViaDelegate = new MyQListWidgetMVViaDelegate(NULL);
	 mMyQListWidgetMVViaDelegate->show();
}