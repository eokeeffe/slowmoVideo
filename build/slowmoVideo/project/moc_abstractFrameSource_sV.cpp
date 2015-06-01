/****************************************************************************
** Meta object code from reading C++ file 'abstractFrameSource_sV.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/slowmoVideo/project/abstractFrameSource_sV.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractFrameSource_sV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractFrameSource_sV_t {
    QByteArrayData data[12];
    char stringdata[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AbstractFrameSource_sV_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AbstractFrameSource_sV_t qt_meta_stringdata_AbstractFrameSource_sV = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 14),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 15),
QT_MOC_LITERAL(4, 55, 8),
QT_MOC_LITERAL(5, 64, 18),
QT_MOC_LITERAL(6, 83, 8),
QT_MOC_LITERAL(7, 92, 25),
QT_MOC_LITERAL(8, 118, 4),
QT_MOC_LITERAL(9, 123, 22),
QT_MOC_LITERAL(10, 146, 23),
QT_MOC_LITERAL(11, 170, 20)
    },
    "AbstractFrameSource_sV\0signalNextTask\0"
    "\0taskDescription\0taskSize\0signalTaskProgress\0"
    "progress\0signalTaskItemDescription\0"
    "desc\0signalAllTasksFinished\0"
    "slotAbortInitialization\0slotUpdateProjectDir\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractFrameSource_sV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06,
       5,    1,   49,    2, 0x06,
       7,    1,   52,    2, 0x06,
       9,    0,   55,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    0,   56,    2, 0x0a,
      11,    0,   57,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AbstractFrameSource_sV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractFrameSource_sV *_t = static_cast<AbstractFrameSource_sV *>(_o);
        switch (_id) {
        case 0: _t->signalNextTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->signalTaskProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->signalTaskItemDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->signalAllTasksFinished(); break;
        case 4: _t->slotAbortInitialization(); break;
        case 5: _t->slotUpdateProjectDir(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractFrameSource_sV::*_t)(const QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractFrameSource_sV::signalNextTask)) {
                *result = 0;
            }
        }
        {
            typedef void (AbstractFrameSource_sV::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractFrameSource_sV::signalTaskProgress)) {
                *result = 1;
            }
        }
        {
            typedef void (AbstractFrameSource_sV::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractFrameSource_sV::signalTaskItemDescription)) {
                *result = 2;
            }
        }
        {
            typedef void (AbstractFrameSource_sV::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractFrameSource_sV::signalAllTasksFinished)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject AbstractFrameSource_sV::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractFrameSource_sV.data,
      qt_meta_data_AbstractFrameSource_sV,  qt_static_metacall, 0, 0}
};


const QMetaObject *AbstractFrameSource_sV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractFrameSource_sV::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractFrameSource_sV.stringdata))
        return static_cast<void*>(const_cast< AbstractFrameSource_sV*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractFrameSource_sV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AbstractFrameSource_sV::signalNextTask(const QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractFrameSource_sV::signalTaskProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractFrameSource_sV::signalTaskItemDescription(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AbstractFrameSource_sV::signalAllTasksFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
