#include "StudentQueryDialog.h"
#include <QFile>
#include <QIODevice>
#include <QMessageBox>
#include <QDebug>

StudentQueryDialog::StudentQueryDialog(QWidget *parent)
	: QDialog(parent)
{
	//UIl�߼�����
	ui.setupUi(this);
	pStandardItemModel  = new QStandardItemModel();

	pStandardItemModel->setHorizontalHeaderItem(0, new QStandardItem(u8"����")); 
	pStandardItemModel->setHorizontalHeaderItem(1, new QStandardItem(u8"ѧ��"));
	pStandardItemModel->setHorizontalHeaderItem(2, new QStandardItem(u8"�Ա�"));
	pStandardItemModel->setHorizontalHeaderItem(3, new QStandardItem(u8"Ժϵ"));
	pStandardItemModel->setHorizontalHeaderItem(4, new QStandardItem(u8"��Ȥ����"));

	ui.tableView->setModel(pStandardItemModel);

	//�ۺ���
	connect(ui.btn_search, SIGNAL(clicked()), this, SLOT(slotQuery()));


	//�ļ���ȡ�߼�
	if (readFromFile()==-1) {
		QMessageBox::critical(this, u8"����", u8"����ļ�ʧ�ܣ�", u8"ȷ��"); 
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