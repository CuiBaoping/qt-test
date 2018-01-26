/****************************************************************************
** Meta object code from reading C++ file 'mywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mySpinBox/mywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myWidget_t {
    QByteArrayData data[7];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myWidget_t qt_meta_stringdata_myWidget = {
    {
QT_MOC_LITERAL(0, 0, 8), // "myWidget"
QT_MOC_LITERAL(1, 9, 27), // "on_timeEdit_userTimeChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 27), // "on_dateEdit_userDateChanged"
QT_MOC_LITERAL(4, 66, 31), // "on_dateTimeEdit_dateTimeChanged"
QT_MOC_LITERAL(5, 98, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(6, 122, 29) // "on_doubleSpinBox_valueChanged"

    },
    "myWidget\0on_timeEdit_userTimeChanged\0"
    "\0on_dateEdit_userDateChanged\0"
    "on_dateTimeEdit_dateTimeChanged\0"
    "on_spinBox_valueChanged\0"
    "on_doubleSpinBox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void myWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myWidget *_t = static_cast<myWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_timeEdit_userTimeChanged(); break;
        case 1: _t->on_dateEdit_userDateChanged(); break;
        case 2: _t->on_dateTimeEdit_dateTimeChanged(); break;
        case 3: _t->on_spinBox_valueChanged(); break;
        case 4: _t->on_doubleSpinBox_valueChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject myWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_myWidget.data,
      qt_meta_data_myWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *myWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_myWidget.stringdata0))
        return static_cast<void*>(const_cast< myWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int myWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
