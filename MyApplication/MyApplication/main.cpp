#include "MyApplication.h"
#include <QtWidgets/QApplication>
#include <QLabel> 

#include "MyFirstCustomWidget.h"

#include "QVLayoutDemoWidget.h"
#include "ComplexCustomWidget.h"
#include "QtMainWidget.h"
#include "QtApplicationDemo.h"

int main(int argc, char *argv[])
{

	char aa = 'a';
	int size1 = sizeof(aa);
	char ac = 'α';
	int size2 = sizeof(ac);
	char str[] = "1αaβ8";
	int size3 = sizeof(str);
	QtApplicationDemo a(argc, argv);
	/**设置全局模式*/
	QString style = "QPushButton{background:yellow;}   QPushButton, QLineEdit{color:blue;}";
	a.setStyleSheet(style);

    //MyApplication w;
    //w.show();
	//QLabel label; 
	////label.setFixedHeight(1080);
	////label.setFixedWidth(1920);	
	//
	//label.setGeometry(0,0, 400, 200);//设置窗体位置及大小
	//label.setWindowTitle(u8"我的第一个Label");
	//label.setText(u8"2021年12月10日");

	//label.move(200,500);//右上角移动到（200，500）的位置 
	//label.show();
	


	QtMainWidget  mainWidget;
	mainWidget.show();

	/***组合Widget***/
	//ComplexCustomWidget  widget ;
	//widget.setGeometry(50, 50, 500, 300);
 //   widget.move(200, 200); 
 //    widget.show();

	/**** 使用Layout*****/
	//QVLayoutDemoWidget layoutWidget;
	//layoutWidget.setWindowTitle(u8"使用QVBoxLayout"); 
	//layoutWidget.setGeometry(50, 50, 500, 300);
	//layoutWidget.move(200, 200); 
	//layoutWidget.show();
	/**** 自定义Widget*****/
	/*MyFirstCustomWidget widget;
	widget.show();*/


    return a.exec();
}
