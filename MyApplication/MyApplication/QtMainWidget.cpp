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

	/*******UI left part:	*****************/
	//simple QWidget demo
	connect(ui.btnFirstWidgetByManal, SIGNAL(clicked()), this, SLOT(onSlotFirstWidgetDemo()));
	connect(ui.btnFirstLayoutByManal, SIGNAL(clicked()), this, SLOT(onSlotFirstLayoutDemo()));
	connect(ui.btnAddWidgetByCode, SIGNAL(clicked()), this, SLOT(onSlotAddWidgetByCode()));
	connect(ui.mpToolButton, SIGNAL(clicked()), this, SLOT(onSlotHelp())); 
	connect(ui.mpBtnLabel, SIGNAL(clicked()), this, SLOT(onSlotQLabel()));	
	connect(ui.btnComboBox, SIGNAL(clicked()), this, SLOT(onSlotQComboBox()));

	//QtWidgetContainer demo
	connect(ui.btnQTabWidget, SIGNAL(clicked()), this, SLOT(onSlotQTabWidget()));	
	connect(ui.btnQTabManual, SIGNAL(clicked()), this, SLOT(onSlotQTabWidgetManual()));
	connect(ui.btnQStackWidget, SIGNAL(clicked()), this, SLOT(onSlotQStackedWidget()));
	connect(ui.mpBtnListWidget, SIGNAL(clicked()), this, SLOT(onSlotQListWidget()));


	connect(ui.btnQListWidgetByModelView, SIGNAL(clicked()), this, SLOT(onSlotQListWidgetByModelView()));	
	connect(ui.btnQListWidgetByDelegate, SIGNAL(clicked()), this, SLOT(onSlotQListWidgetMVViaDelegate()));

	bool succes =connect(ui.btnModelView, SIGNAL(clicked()), this, SLOT(onSlotModelView()));

	/****UI the middle  part: QListWidget********************/	
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
	addQListWidgetItem(u8"Modal 和Non-Modal 对话框", 19);
	addQListWidgetItem(u8"QFileDialog示例程序", 20);
	addQListWidgetItem(u8"Non-Modal窗口演示", 21);
	addQListWidgetItem(u8"MainWindow展示类", 22);
	addQListWidgetItem(u8"NotePad小演示程序：使用MainWindow创建", 23);
	addQListWidgetItem(u8"可停靠窗口演示：QDockWidget", 24);

	connect(ui.listWidget, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(onSlotItemClick(QListWidgetItem *)));

	/**********the right part**********/
	mTreeWidgetPresenter = new QTreeWidgetPresenter(this, ui.treeWidget);

}

void QtMainWidget::onSlotItemClick(QListWidgetItem *item)
{
	int resultCode = -1;
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
		mMyQTreeWidgetWithCustomItem = new MyQTreeWidgetWithCustomItem(NULL);
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
	case 19:

		mpLoginDialog = new LoginDialog(this);
		//mpLoginDialog->show();//非模态Non-modal;
		resultCode = mpLoginDialog->exec();//modal dialog,程序阻塞；
		if (resultCode == QDialog::Accepted)
		{//用户点击登录，取得用户的输入；
			qDebug() << "QDialog::Accepted";
			qDebug() << "UserName=" << mpLoginDialog->mUserName << ",mPassword=" << mpLoginDialog->mPassword;
		}
		else if (resultCode == QDialog::Rejected)
		{
			qDebug() << "QDialog::Rejected";
		}
		break;

	case 20:
		mpFileDialogDemoWidget = new QFileDialogDemoWidget(this);
		mpFileDialogDemoWidget->show();
		break;

	case 21:
		mpNonModalWindowDemo = new NonModalWindowDemo(this);
		mpNonModalWindowDemo->show();
		break;

	case 22:
		mpMyMainWindowDemo = new MyMainWindowDemo(Q_NULLPTR);
		mpMyMainWindowDemo->show();
		break;
	case 23:
		mpNotePadMainWindow = new NotePadMainWindow(Q_NULLPTR);
		mpNotePadMainWindow->show();
		break;
	case 24:
		myQDockWidgetDemo = new QDockWidgetDemo(Q_NULLPTR);
		myQDockWidgetDemo->show();
		break;
	case 25:

		break;
	case 26:

		break;
	case 27:
		break;
	default:
		break;
	}
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

	if (mTreeWidgetPresenter)
	{
	   delete mTreeWidgetPresenter;
	   mTreeWidgetPresenter = Q_NULLPTR;
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

void QtMainWidget::onSlotQListWidget() 
{
	mMyQListWidget = new MyQListWidget(NULL);

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

