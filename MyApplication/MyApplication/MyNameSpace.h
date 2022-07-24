#pragma once
#include<QString>
#include<QFile>
#include<QTextCodec>
/*
*解决方案中的命名空间
  提供全局函数（类似于Java中的静态函数，供项目使用）
*/
namespace ApplicationGlobal1
{
	QString test()
	{
		return "##test##";
	};
	/*
	*读取CSS文件中的内容
	*/
	QString readCssFile(QString fileName) 
	{
		QString result = "";
		QFile file(fileName);
		if (file.open(QIODevice::ReadOnly|QIODevice::Text)) 
		{
			QByteArray bytes = file.readAll();
			QTextCodec* codec = QTextCodec::codecForName("GBK");
			if (codec) 
			{
				result = codec->toUnicode(bytes);
			}
		}
		return result;
	};
}


