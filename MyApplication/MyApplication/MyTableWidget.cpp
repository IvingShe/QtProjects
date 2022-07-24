
#include "MyTableWidget.h"

#include<QTableWidgetItem>

MyTableWidget::MyTableWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//step1:����QTableWidget���������б�ǩ
	ui.tableWidget->setColumnCount(3);	
	//����QTableWidget���б�ǩ
	QStringList headers;
	headers.append(u8"ѧ ��");
	headers.append(u8"�� ��");
	headers.append(u8"�� ��");
	ui.tableWidget->setHorizontalHeaderLabels(headers);

	//step2:�������
	addData("200414016", u8"����", 578);
	addData("200414064",u8"����",572);
	addData("200414065", u8"½��", 572);
	addData("200414072", u8"����", 568);
}
void MyTableWidget::addData(const QString& id, const QString& name, int score)
{
	//step1:����һ�в����룻
	int row = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(row);

	//step2:�����row�е�0��Ԫ������
	QTableWidgetItem* item = new QTableWidgetItem();
	item->setText(id);
	ui.tableWidget->setItem(row,0,item);

	//step3:�����row�е�1��Ԫ������
	item = new QTableWidgetItem();
	item->setText(name);
	ui.tableWidget->setItem(row, 1, item);

	//step4:�����row�е�2��Ԫ������
    item = new QTableWidgetItem(); 
	item->setText(QString::number(score));
	ui.tableWidget->setItem(row, 2, item);

}

MyTableWidget::~MyTableWidget()
{
}
