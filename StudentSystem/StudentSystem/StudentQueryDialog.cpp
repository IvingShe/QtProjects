#include "StudentQueryDialog.h"
#include <QFile>
#include <QIODevice>
#include <QMessageBox>
#include <QDebug>

StudentQueryDialog::StudentQueryDialog(QWidget *parent)
	: QDialog(parent)
{
	//UIl逻辑设置
	ui.setupUi(this);
	pStandardItemModel  = new QStandardItemModel();

	pStandardItemModel->setHorizontalHeaderItem(0, new QStandardItem(u8"姓名")); 
	pStandardItemModel->setHorizontalHeaderItem(1, new QStandardItem(u8"学号"));
	pStandardItemModel->setHorizontalHeaderItem(2, new QStandardItem(u8"性别"));
	pStandardItemModel->setHorizontalHeaderItem(3, new QStandardItem(u8"院系"));
	pStandardItemModel->setHorizontalHeaderItem(4, new QStandardItem(u8"兴趣爱号"));

	ui.tableView->setModel(pStandardItemModel);

	//槽函数
	connect(ui.btn_search, SIGNAL(clicked()), this, SLOT(slotQuery()));


	//文件读取逻辑
	if (readFromFile()==-1) {
		QMessageBox::critical(this, u8"错误", u8"打错文件失败！", u8"确定"); 
		this->close();
	}
	
}

StudentQueryDialog::~StudentQueryDialog()
{
	delete pStandardItemModel;
}

int StudentQueryDialog::readFromFile() {
	QFile file("studentInfo.txt");
	if (!file.open(QIODevice:: Text|QIODevice::ReadOnly)) {
		return -1;
	}
	while (!file.atEnd()) {
		QString line = file.readLine();
		mStuLines.append(line);
	}
	
	for (int i = 0; i < mStuLines.size();i++) {
		QString line = mStuLines.at(i);
		qDebug() << line;
	}
	return 0;
}

void StudentQueryDialog::displayContent(int row, QStringList &content) {
	for (int i = 0; i < content.length(); i++) {
		pStandardItemModel->setItem(row,i, new QStandardItem(content.at(i)));
	}
}

void StudentQueryDialog::doQuery(int departIndex,QString & content) {
	for (int i = 0; i < mStuLines.size(); i++) {
		QString line = mStuLines.at(i);
		line = line.trimmed();
		QStringList segments = line.split(" "); 
		int row = 0;
		switch (departIndex)
		{
		case 1:
			if (segments.at(0)== content) {
				qDebug() << line;
				displayContent(row++, segments);
			}
			break;
		case 2:
			if (segments.at(1).trimmed() == content.trimmed()) {
				qDebug() << line;
				displayContent(row++, segments);
			}
			break;
		case 3:
			if (segments.at(3).trimmed() == content.trimmed()) {
				qDebug() << line;
				displayContent(row++, segments);
			}	break;
		default:
			break;
		}
	}
}

void StudentQueryDialog::slotQuery() {
	int departIndex = ui.cb_selection->currentIndex();
	QString  content = ui.le_content->text();
	doQuery(departIndex, content);
}