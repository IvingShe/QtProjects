#pragma once
#include<QString>
#include<QFile>
#include<QTextCodec>
/*
*��������е������ռ�
  �ṩȫ�ֺ�����������Java�еľ�̬����������Ŀʹ�ã�
*/
namespace ApplicationGlobal1
{
	QString test()
	{
		return "##test##";
	};
	/*
	*��ȡCSS�ļ��е�����
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


