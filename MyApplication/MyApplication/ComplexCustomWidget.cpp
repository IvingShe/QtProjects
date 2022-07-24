#include "ComplexCustomWidget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
ComplexCustomWidget::ComplexCustomWidget(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);

	mBtn = new QPushButton(this);
	mBtn->setText("OK");
	mLineEdit = new QLineEdit(this);
	mPlainText = new QPlainTextEdit(this);

	QHBoxLayout* hLayout = new QHBoxLayout();
	hLayout->addWidget(mBtn); 
	hLayout->addWidget(mLineEdit); 

	QVBoxLayout* vLayout = new QVBoxLayout();

	vLayout->addLayout(hLayout);
	vLayout->addWidget(mPlainText); 

	this->setLayout(vLayout);

}

ComplexCustomWidget::~ComplexCustomWidget()
{
}
