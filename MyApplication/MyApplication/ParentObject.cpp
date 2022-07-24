#include "ParentObject.h"
#include <QDebug>
ParentObject::ParentObject(QObject *parent)
	: QObject(parent)
{
	qDebug() << "ParentObject";
	//��������������
	child = new ChildObjectWithParentCotext(this);//ʹ����ParentObject��thisָ��
	pChildWithoutParent = new QChildObjectWithoutParent(Q_NULLPTR);//û��ʹ��ParentObject��thisָ��
}

ParentObject::~ParentObject()
{
	qDebug() << "~ParentObject";
	//�����ڴ�й©��
	//��Ҫ���Ե�ɾ�� û��ʹ��ParentObject��this��Ϊ�����ĵ�pChildWithoutParent����
	if (pChildWithoutParent) {
		delete pChildWithoutParent;
		pChildWithoutParent = Q_NULLPTR;
	}
}
