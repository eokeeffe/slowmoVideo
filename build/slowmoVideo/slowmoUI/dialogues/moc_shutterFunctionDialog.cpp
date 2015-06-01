/****************************************************************************
** Meta object code from reading C++ file 'shutterFunctionDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/slowmoVideo/slowmoUI/dialogues/shutterFunctionDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shutterFunctionDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShutterFunctionDialog_t {
    QByteArrayData data[15];
    char stringdata[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ShutterFunctionDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ShutterFunctionDialog_t qt_meta_stringdata_ShutterFunctionDialog = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 16),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 10),
QT_MOC_LITERAL(4, 51, 12),
QT_MOC_LITERAL(5, 64, 1),
QT_MOC_LITERAL(6, 66, 10),
QT_MOC_LITERAL(7, 77, 12),
QT_MOC_LITERAL(8, 90, 14),
QT_MOC_LITERAL(9, 105, 23),
QT_MOC_LITERAL(10, 129, 24),
QT_MOC_LITERAL(11, 154, 15),
QT_MOC_LITERAL(12, 170, 18),
QT_MOC_LITERAL(13, 189, 15),
QT_MOC_LITERAL(14, 205, 15)
    },
    "ShutterFunctionDialog\0slotNodesUpdated\0"
    "\0paintEvent\0QPaintEvent*\0e\0closeEvent\0"
    "QCloseEvent*\0slotUpdateNode\0"
    "slotFunctionTextChanged\0"
    "slotLoadSelectedFunction\0slotAddFunction\0"
    "slotRemoveFunction\0slotNextSegment\0"
    "slotPrevSegment\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShutterFunctionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a,
       3,    1,   65,    2, 0x09,
       6,    1,   68,    2, 0x09,
       8,    0,   71,    2, 0x08,
       9,    0,   72,    2, 0x08,
      10,    0,   73,    2, 0x08,
      11,    0,   74,    2, 0x08,
      12,    0,   75,    2, 0x08,
      13,    0,   76,    2, 0x08,
      14,    0,   77,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ShutterFunctionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShutterFunctionDialog *_t = static_cast<ShutterFunctionDialog *>(_o);
        switch (_id) {
        case 0: _t->slotNodesUpdated(); break;
        case 1: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 2: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 3: _t->slotUpdateNode(); break;
        case 4: _t->slotFunctionTextChanged(); break;
        case 5: _t->slotLoadSelectedFunction(); break;
        case 6: _t->slotAddFunction(); break;
        case 7: _t->slotRemoveFunction(); break;
        case 8: _t->slotNextSegment(); break;
        case 9: _t->slotPrevSegment(); break;
        default: ;
        }
    }
}

const QMetaObject ShutterFunctionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ShutterFunctionDialog.data,
      qt_meta_data_ShutterFunctionDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ShutterFunctionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShutterFunctionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShutterFunctionDialog.stringdata))
        return static_cast<void*>(const_cast< ShutterFunctionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ShutterFunctionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
