/****************************************************************************
** Meta object code from reading C++ file 'mywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myDialog2/mywidget.h"
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
    QByteArrayData data[10];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myWidget_t qt_meta_stringdata_myWidget = {
    {
QT_MOC_LITERAL(0, 0, 8), // "myWidget"
QT_MOC_LITERAL(1, 9, 26), // "on_pushColorButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "on_pushFileButton_clicked"
QT_MOC_LITERAL(4, 63, 25), // "on_pushFontButton_clicked"
QT_MOC_LITERAL(5, 89, 26), // "on_pushInputButton_clicked"
QT_MOC_LITERAL(6, 116, 25), // "on_pushInfoButton_clicked"
QT_MOC_LITERAL(7, 142, 29), // "on_pushProgressButton_clicked"
QT_MOC_LITERAL(8, 172, 28), // "on_pushErrInfoButton_clicked"
QT_MOC_LITERAL(9, 201, 27) // "on_pushWizardButton_clicked"

    },
    "myWidget\0on_pushColorButton_clicked\0"
    "\0on_pushFileButton_clicked\0"
    "on_pushFontButton_clicked\0"
    "on_pushInputButton_clicked\0"
    "on_pushInfoButton_clicked\0"
    "on_pushProgressButton_clicked\0"
    "on_pushErrInfoButton_clicked\0"
    "on_pushWizardButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void myWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myWidget *_t = static_cast<myWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushColorButton_clicked(); break;
        case 1: _t->on_pushFileButton_clicked(); break;
        case 2: _t->on_pushFontButton_clicked(); break;
        case 3: _t->on_pushInputButton_clicked(); break;
        case 4: _t->on_pushInfoButton_clicked(); break;
        case 5: _t->on_pushProgressButton_clicked(); break;
        case 6: _t->on_pushErrInfoButton_clicked(); break;
        case 7: _t->on_pushWizardButton_clicked(); break;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
