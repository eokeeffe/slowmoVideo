/****************************************************************************
** Meta object code from reading C++ file 'renderTask_sV.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/slowmoVideo/project/renderTask_sV.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'renderTask_sV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RenderTask_sV_t {
    QByteArrayData data[17];
    char stringdata[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RenderTask_sV_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RenderTask_sV_t qt_meta_stringdata_RenderTask_sV = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 17),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 14),
QT_MOC_LITERAL(4, 48, 4),
QT_MOC_LITERAL(5, 53, 18),
QT_MOC_LITERAL(6, 72, 5),
QT_MOC_LITERAL(7, 78, 24),
QT_MOC_LITERAL(8, 103, 22),
QT_MOC_LITERAL(9, 126, 10),
QT_MOC_LITERAL(10, 137, 23),
QT_MOC_LITERAL(11, 161, 22),
QT_MOC_LITERAL(12, 184, 6),
QT_MOC_LITERAL(13, 191, 13),
QT_MOC_LITERAL(14, 205, 8),
QT_MOC_LITERAL(15, 214, 21),
QT_MOC_LITERAL(16, 236, 17)
    },
    "RenderTask_sV\0workFlowRequested\0\0"
    "signalItemDesc\0desc\0signalTaskProgress\0"
    "value\0signalRenderingContinued\0"
    "signalRenderingStopped\0renderTime\0"
    "signalRenderingFinished\0signalRenderingAborted\0"
    "reason\0signalNewTask\0taskSize\0"
    "slotContinueRendering\0slotStopRendering\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RenderTask_sV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06,
       3,    1,   65,    2, 0x06,
       5,    1,   68,    2, 0x06,
       7,    0,   71,    2, 0x06,
       8,    1,   72,    2, 0x06,
      10,    1,   75,    2, 0x06,
      11,    1,   78,    2, 0x06,
      13,    2,   81,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      15,    0,   86,    2, 0x0a,
      16,    0,   87,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RenderTask_sV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RenderTask_sV *_t = static_cast<RenderTask_sV *>(_o);
        switch (_id) {
        case 0: _t->workFlowRequested(); break;
        case 1: _t->signalItemDesc((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->signalTaskProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->signalRenderingContinued(); break;
        case 4: _t->signalRenderingStopped((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->signalRenderingFinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->signalRenderingAborted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->signalNewTask((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->slotContinueRendering(); break;
        case 9: _t->slotStopRendering(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RenderTask_sV::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RenderTask_sV::workFlowRequested)) {
                *result = 0;
            }
        }
        {
            typedef void (RenderTask_sV::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RenderTask_sV::signalItemDesc)) {
                *result = 1;
            }
        }
        {
            typedef void (RenderTask_sV::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RenderTask_sV::signalTaskProgress)) {
                *result = 2;
            }
        }
        {
            typedef void (RenderTask_sV::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RenderTask_sV::signalRenderingContinued)) {
                *result = 3;
            }
        }
        {
            typedef void (RenderTask_sV::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RenderTask_sV::signalRenderingStopped)) {
                *result = 4;
            }
        }
        {
            typedef void (RenderTask_sV::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RenderTask_sV::signalRenderingFinished)) {
                *result = 5;
            }
        }
        {
            typedef void (RenderTask_sV::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RenderTask_sV::signalRenderingAborted)) {
                *result = 6;
            }
        }
        {
            typedef void (RenderTask_sV::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RenderTask_sV::signalNewTask)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject RenderTask_sV::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RenderTask_sV.data,
      qt_meta_data_RenderTask_sV,  qt_static_metacall, 0, 0}
};


const QMetaObject *RenderTask_sV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RenderTask_sV::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RenderTask_sV.stringdata))
        return static_cast<void*>(const_cast< RenderTask_sV*>(this));
    return QObject::qt_metacast(_clname);
}

int RenderTask_sV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void RenderTask_sV::workFlowRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RenderTask_sV::signalItemDesc(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RenderTask_sV::signalTaskProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RenderTask_sV::signalRenderingContinued()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void RenderTask_sV::signalRenderingStopped(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RenderTask_sV::signalRenderingFinished(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RenderTask_sV::signalRenderingAborted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RenderTask_sV::signalNewTask(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
