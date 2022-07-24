
#include "MyTableWidget.h"

#include<QTableWidgetItem>

MyTableWidget::MyTableWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//step1:设置QTableWidget的列数及列标签
	ui.tableWidget->setColumnCount(3);	
	//设置QTableWidget的列标签
	QStringList headers;
	headers.append(u8"学 号");
	headers.append(u8"姓 名");
	headers.append(u8"成 绩");
	ui.tableWidget->setHorizontalHeaderLabels(headers);

	//step2:添加数据
	addData("200414016", u8"巩俊", 578);
	addData("200414064",u8"佘立",572);
	addData("200414065", u8"陆宝", 572);
	addData("200414072", u8"庞瑞", 568);
}
void MyTableWidget::addData(const QString& id, const QString& name, int score)
{
	//step1:创建一行并插入；
	int row = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(row);

	//step2:插入第row行第0单元格内容
	QTableWidgetItem* item = new QTableWidgetItem();
	item->setText(id);
	ui.tableWidget->setItem(row,0,item);

	//step3:插入第row行第1单元格内容
	item = new QTableWidgetItem();
	item->setText(name);
	ui.tableWidget->setItem(row, 1, item);

	//step4:插入第row行第2单元格内容
    item = new QTableWidgetItem(); 
	item->setText(QString::number(score));
	ui.tableWidget->setItem(row, 2, item);

}

MyTableWidget::~MyTableWidget()
{
}
