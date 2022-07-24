#include "MyQCombobox.h"

MyQCombobox::MyQCombobox(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.comboBox2->addItem("China","cn");
	ui.comboBox2->addItem("Japen","jp");
	ui.comboBox2->addItem("America","usa");

	ui.comboBox2->insertItem(1,"Canada","ca");
	connect(ui.btnOK, SIGNAL(clicked()), this, SLOT(onSlotComboBox()));
	connect(ui.comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(onSlotCurrentIndexChanged(int)));
}

MyQCombobox::~MyQCombobox()
{	
}

void MyQCombobox::onSlotComboBox()
{
	int index =ui.comboBox2->currentIndex();
	QString curData =ui.comboBox2->itemData(index).toString();
	QString curText = ui.comboBox2->itemText(index);

	QString content = QString(u8"当前index:%1 ; 当前Text:%2; 当前Data:%3").arg(index).arg(curText).arg(curData);
	ui.label_2->setText(content);
}

void MyQCombobox::onSlotCurrentIndexChanged(int idex) {
	QString curText = ui.comboBox->currentText();
	QString curData = ui.comboBox->itemData(idex).toString();

	QString content = QString(u8"当前index:%1 ; 当前Text:%2; 当前Data:%3").arg(idex).arg(curText).arg(curData);
	ui.label->setText(content);

}