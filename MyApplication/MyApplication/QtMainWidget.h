#pragma once
#include <QWidget>
#include "ui_QtMainWidget.h"

#include "QVLayoutDemoWidget.h"
#include "ComplexCustomWidget.h"
#include "MyFirstCustomWidget.h"

#include "MyQLabel.h"
#include "MyQtTabWidget.h"
#include "MyQtTabWidget2.h"
#include "MyQStackedWidget.h"
#include "MyQListWidget.h"
#include "MyQListWidgetByModelView.h"
#include "MyQListWidgetMVViaDelegate.h"
#include "MyQCombobox.h"

#include "MyCircle.h"
#include "UsingMyCircleInQtDesigner.h"
#include "MyWidgetWithQPenAndQBrush.h"
#include "MyQWidgetWithSimpleAnimation.h"
#include "MyQtDrawTextWidget.h"
#include "MyDrawingPictureWidget.h"
#include "QtWidgetsWithMouse.h"
#include "MyEditListWidget.h"
#include "MyListWidgetWithContextMenu.h"
#include "MyTreeWidget.h"
#include "MyTableWidget.h"
#include "MyQTreeWidgetWithCustomItem.h"
#include "MyQTreeWidgetWithCustomItem2.h"
#include "Threads/MyTimer.h"
#include "CharsetDemoWidget.h"

#include "LoginDialog.h"
#include "QFileDialogDemoWidget.h"
#include "NonModalWindowDemo.h"
#include "MyMainWindowDemo.h"
#include "NotePadMainWindow.h"
#include "QDockWidgetDemo.h"
/*
* ��ģ���ж�������ļ�
*/
#include "workThread/FileSenderWidget.h"
#include "DLLFirstDemoClass.h"

#include "QObjectTreeTestWidget.h"

class QtMainWidget : public QWidget
{
	Q_OBJECT

public:
	QtMainWidget(QWidget *parent = Q_NULLPTR);
	~QtMainWidget();

private:
	void addQListWidgetItem(const QString text, int role);
private slots:
	void onSlotFirstWidgetDemo();
	void onSlotFirstLayoutDemo();
	void onSlotAddWidgetByCode();
	void onSlotHelp();
	void onSlotQLabel();
	void onSlotQTabWidget();
	void onSlotQTabWidgetManual();
	void onSlotQStackedWidget();
	void onSlotQListWidget();
	void onSlotQListWidgetByModelView();
	void onSlotQListWidgetMVViaDelegate();
	void  onSlotQComboBox(); 
	void onSlotModelView();	
	//item click	
	void onSlotItemClick(QListWidgetItem *item);
private:
	Ui::QtMainWidget ui;
	MyFirstCustomWidget* mMyFirstCustomWidget;
    QVLayoutDemoWidget* mQVLayoutDemoWidget;
	ComplexCustomWidget* mComplexCustomWidget;

	MyQLabel* mMyLabel;
	MyQtTabWidget* mMyQtTabWidget;
	MyQtTabWidget2* mMyQtTabWidget2;
	MyQStackedWidget* mMyQStackedWidget;
	MyQListWidget* mMyQListWidget;
	MyQCombobox* mMyQCombobox;
	//ʹ��ModelView��ܴ���QListWidget
	MyQListWidgetByModelView* mMyQListWidgetByModelView;
	//ʹ��ModelView��� �е�Delegate ������QListWidget
	MyQListWidgetMVViaDelegate* mMyQListWidgetMVViaDelegate;

	MyCircle* mMyCircle;
	UsingMyCircleInQtDesigner* mUsingMyCircleInQtDesigner;
	MyWidgetWithQPenAndQBrush* mMyWidgetWithQPenAndQBrush;
	MyQWidgetWithSimpleAnimation* mMyQWidgetWithSimpleAnimation;
	MyQtDrawTextWidget* mMyQtDrawTextWidget;
	MyDrawingPictureWidget* mMyDrawingPictureWidget;
	QtWidgetsWithMouse* mQtWidgetsWithMouse;
	MyEditListWidget* mMyEditListWidget;
	MyListWidgetWithContextMenu*  mMyListWidgetWithContextMenu;
	MyTreeWidget* mMyTreeWidget;
	MyTableWidget* mMyTableWidget;
	MyQTreeWidgetWithCustomItem* mMyQTreeWidgetWithCustomItem;
	MyQTreeWidgetWithCustomItem2* mMyQTreeWidgetWithCustomItem2;
	//���߳�
	MyTimer *mMyTimer;
	CharsetDemoWidget*  mCharsetDemoWidget;

	//��ģ�飨static library �� shared library���е���
	FileSenderWidget* mpFileSenderWidget;
	DLLFirstDemoClass* mpFirstDll;


	QObjectTreeTestWidget *pQObjectTreeTestWidget=Q_NULLPTR;

	LoginDialog* mpLoginDialog = nullptr;
	QFileDialogDemoWidget* mpFileDialogDemoWidget = nullptr;
	NonModalWindowDemo* mpNonModalWindowDemo = nullptr;

	MyMainWindowDemo* mpMyMainWindowDemo = Q_NULLPTR;
	NotePadMainWindow* mpNotePadMainWindow = Q_NULLPTR;
	QDockWidgetDemo* myQDockWidgetDemo = NULL;
};
