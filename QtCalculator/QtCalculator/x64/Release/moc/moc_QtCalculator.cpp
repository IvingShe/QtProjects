/****************************************************************************
** Meta object code from reading C++ file 'QtCalculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtCalculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtCalculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCalculator_t {
    QByteArrayData data[18];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCalculator_t qt_meta_stringdata_QtCalculator = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QtCalculator"
QT_MOC_LITERAL(1, 13, 7), // "getBtn0"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "getBtn1"
QT_MOC_LITERAL(4, 30, 7), // "getBtn2"
QT_MOC_LITERAL(5, 38, 7), // "getBtn3"
QT_MOC_LITERAL(6, 46, 7), // "getBtn4"
QT_MOC_LITERAL(7, 54, 7), // "getBtn5"
QT_MOC_LITERAL(8, 62, 7), // "getBtn6"
QT_MOC_LITERAL(9, 70, 7), // "getBtn7"
QT_MOC_LITERAL(10, 78, 7), // "getBtn8"
QT_MOC_LITERAL(11, 86, 7), // "getBtn9"
QT_MOC_LITERAL(12, 94, 5), // "onAdd"
QT_MOC_LITERAL(13, 100, 5), // "onSub"
QT_MOC_LITERAL(14, 106, 5), // "onDiv"
QT_MOC_LITERAL(15, 112, 5), // "onMul"
QT_MOC_LITERAL(16, 118, 7), // "onEqual"
QT_MOC_LITERAL(17, 126, 7) // "onClear"

    },
    "QtCalculator\0getBtn0\0\0getBtn1\0getBtn2\0"
    "getBtn3\0getBtn4\0getBtn5\0getBtn6\0getBtn7\0"
    "getBtn8\0getBtn9\0onAdd\0onSub\0onDiv\0"
    "onMul\0onEqual\0onClear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCalculator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getBtn0(); break;
        case 1: _t->getBtn1(); break;
        case 2: _t->getBtn2(); break;
        case 3: _t->getBtn3(); break;
        case 4: _t->getBtn4(); break;
        case 5: _t->getBtn5(); break;
        case 6: _t->getBtn6(); break;
        case 7: _t->getBtn7(); break;
        case 8: _t->getBtn8(); break;
        case 9: _t->getBtn9(); break;
        case 10: _t->onAdd(); break;
        case 11: _t->onSub(); break;
        case 12: _t->onDiv(); break;
        case 13: _t->onMul(); break;
        case 14: _t->onEqual(); break;
        case 15: _t->onClear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtCalculator::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QtCalculator.data,
    qt_meta_data_QtCalculator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCalculator.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QtCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
