#pragma once

#include <QDialog>
#include "ui_StudentQueryDialog.h"
#include <QString>
#include <QList>
#include <QStandardItemModel>

class StudentQueryDialog : public QDialog
{
	Q_OBJECT

public:
	StudentQueryDialog(QWidget *parent = Q_NULLPTR);
	~StudentQueryDialog();
	int readFromFile();
	void doQuery(int departIndex, QString & content);

	void displayContent(int row, QStringList &content) ;

private slots:
	void slotQuery();

private:
	Ui::StudentQueryDialog ui;
	QList<QString> mStuLines;
	QStandardItemModel  *pStandardItemModel;
};
