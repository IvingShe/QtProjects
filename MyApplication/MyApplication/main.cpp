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
	char ac = '��';
	int size2 = sizeof(ac);
	char str[] = "1��a��8";
	int size3 = sizeof(str);
	QtApplicationDemo a(argc, argv);
	/**����ȫ��ģʽ*/
	QString style = "QPushButton{background:yellow;}   QPushButton, QLineEdit{color:blue;}";
	a.setStyleSheet(style);

    //MyApplication w;
    //w.show();
	//QLabel label; 
	////label.setFixedHeight(1080);
	////label.setFixedWidth(1920);	
	//
	//label.setGeometry(0,0, 400, 200);//���ô���λ�ü���С
	//label.setWindowTitle(u8"�ҵĵ�һ��Label");
	//label.setText(u8"2021��12��10��");

	//label.move(200,500);//���Ͻ��ƶ�����200��500����λ�� 
	//label.show();
	


	QtMainWidget  mainWidget;
	mainWidget.show();

	/***���Widget***/
	//ComplexCustomWidget  widget ;
	//widget.setGeometry(50, 50, 500, 300);
 //   widget.move(200, 200); 
 //    widget.show();

	/**** ʹ��Layout*****/
	//QVLayoutDemoWidget layoutWidget;
	//layoutWidget.setWindowTitle(u8"ʹ��QVBoxLayout"); 
	//layoutWidget.setGeometry(50, 50, 500, 300);
	//layoutWidget.move(200, 200); 
	//layoutWidget.show();
	/**** �Զ���Widget*****/
	/*MyFirstCustomWidget widget;
	widget.show();*/


    return a.exec();
}
