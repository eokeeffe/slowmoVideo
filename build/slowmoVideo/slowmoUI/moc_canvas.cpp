/****************************************************************************
** Meta object code from reading C++ file 'canvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/slowmoVideo/slowmoUI/canvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransferObject_t {
    QByteArrayData data[1];
    char stringdata[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TransferObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TransferObject_t qt_meta_stringdata_TransferObject = {
    {
QT_MOC_LITERAL(0, 0, 14)
    },
    "TransferObject\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransferObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TransferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TransferObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TransferObject.data,
      qt_meta_data_TransferObject,  qt_static_metacall, 0, 0}
};


const QMetaObject *TransferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TransferObject.stringdata))
        return static_cast<void*>(const_cast< TransferObject*>(this));
    return QObject::qt_metacast(_clname);
}

int TransferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Canvas_t {
    QByteArrayData data[25];
    char stringdata[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Canvas_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Canvas_t qt_meta_stringdata_Canvas = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 27),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 5),
QT_MOC_LITERAL(4, 42, 30),
QT_MOC_LITERAL(5, 73, 12),
QT_MOC_LITERAL(6, 86, 9),
QT_MOC_LITERAL(7, 96, 13),
QT_MOC_LITERAL(8, 110, 5),
QT_MOC_LITERAL(9, 116, 10),
QT_MOC_LITERAL(10, 127, 15),
QT_MOC_LITERAL(11, 143, 15),
QT_MOC_LITERAL(12, 159, 16),
QT_MOC_LITERAL(13, 176, 4),
QT_MOC_LITERAL(14, 181, 13),
QT_MOC_LITERAL(15, 195, 1),
QT_MOC_LITERAL(16, 197, 19),
QT_MOC_LITERAL(17, 217, 9),
QT_MOC_LITERAL(18, 227, 15),
QT_MOC_LITERAL(19, 243, 8),
QT_MOC_LITERAL(20, 252, 12),
QT_MOC_LITERAL(21, 265, 1),
QT_MOC_LITERAL(22, 267, 22),
QT_MOC_LITERAL(23, 290, 10),
QT_MOC_LITERAL(24, 301, 11)
    },
    "Canvas\0signalMouseInputTimeChanged\0\0"
    "frame\0signalMouseCurveSrcTimeChanged\0"
    "nodesChanged\0slotAbort\0Canvas::Abort\0"
    "abort\0slotAddTag\0slotDeleteNodes\0"
    "slotSetToolMode\0Canvas::ToolMode\0mode\0"
    "slotRunAction\0o\0slotChangeCurveType\0"
    "curveType\0slotResetHandle\0position\0"
    "slotSetSpeed\0s\0slotSetShutterFunction\0"
    "slotZoomIn\0slotZoomOut\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Canvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06,
       4,    1,   92,    2, 0x06,
       5,    0,   95,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   96,    2, 0x0a,
       9,    0,   99,    2, 0x0a,
      10,    0,  100,    2, 0x0a,
      11,    1,  101,    2, 0x0a,
      14,    1,  104,    2, 0x08,
      16,    1,  107,    2, 0x08,
      18,    1,  110,    2, 0x08,
      20,    0,  113,    2, 0x08,
      20,    1,  114,    2, 0x08,
      22,    0,  117,    2, 0x08,
      23,    0,  118,    2, 0x08,
      24,    0,  119,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QObjectStar,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Canvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Canvas *_t = static_cast<Canvas *>(_o);
        switch (_id) {
        case 0: _t->signalMouseInputTimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->signalMouseCurveSrcTimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->nodesChanged(); break;
        case 3: _t->slotAbort((*reinterpret_cast< Canvas::Abort(*)>(_a[1]))); break;
        case 4: _t->slotAddTag(); break;
        case 5: _t->slotDeleteNodes(); break;
        case 6: _t->slotSetToolMode((*reinterpret_cast< Canvas::ToolMode(*)>(_a[1]))); break;
        case 7: _t->slotRunAction((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->slotChangeCurveType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slotResetHandle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->slotSetSpeed(); break;
        case 11: _t->slotSetSpeed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->slotSetShutterFunction(); break;
        case 13: _t->slotZoomIn(); break;
        case 14: _t->slotZoomOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Canvas::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Canvas::signalMouseInputTimeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Canvas::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Canvas::signalMouseCurveSrcTimeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Canvas::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Canvas::nodesChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Canvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Canvas.data,
      qt_meta_data_Canvas,  qt_static_metacall, 0, 0}
};


const QMetaObject *Canvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Canvas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Canvas.stringdata))
        return static_cast<void*>(const_cast< Canvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int Canvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Canvas::signalMouseInputTimeChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Canvas::signalMouseCurveSrcTimeChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Canvas::nodesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
