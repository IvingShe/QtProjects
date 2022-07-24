#pragma once

#include <QWidget>
#include "ui_GBK.h"
#include <QTextCodec> 

class GBK : public QWidget
{
	Q_OBJECT

public:
	GBK(QWidget *parent = Q_NULLPTR);
	~GBK();

	/*
	*QString£¨Unicode£©-->std::string(GBK)
	*/
	static std::string  FromUnicode(const QString content);

	/*
	*std::string(GBK)-->QString£¨Unicode£©
	*/
	static QString  ToUnicode(std::string& content);


private:
	Ui::GBK ui;
};
