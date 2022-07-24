#include "GBK.h"

GBK::GBK(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}
GBK::~GBK()
{
}

/*
*QString£¨Unicode£©-->std::string(GBK)
*/
std::string  GBK::FromUnicode(const QString content)
{
	QTextCodec* pCodec = QTextCodec::codecForName("gb2312");
	if (!pCodec)
	{
		return "";
	}
	QByteArray array = pCodec->fromUnicode(content);
	std::string str = array.data();
	return str;
}

/*
*std::string(GBK)-->QString£¨Unicode£©
*/
QString   GBK::ToUnicode(std::string& content)
{
	QTextCodec* pCodec = QTextCodec::codecForName("gb2312");
	if (!pCodec)
	{
		return "";
	}
	QString str =pCodec->toUnicode(content.c_str(), content.length());
	return str;
}