/****************************************************************************
** Meta object code from reading C++ file 'imageDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/slowmoVideo/libgui/imageDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageDisplay_t {
    QByteArrayData data[24];
    char stringdata[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ImageDisplay_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ImageDisplay_t qt_meta_stringdata_ImageDisplay = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 16),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 1),
QT_MOC_LITERAL(4, 33, 1),
QT_MOC_LITERAL(5, 35, 18),
QT_MOC_LITERAL(6, 54, 15),
QT_MOC_LITERAL(7, 70, 9),
QT_MOC_LITERAL(8, 80, 9),
QT_MOC_LITERAL(9, 90, 3),
QT_MOC_LITERAL(10, 94, 11),
QT_MOC_LITERAL(11, 106, 12),
QT_MOC_LITERAL(12, 119, 10),
QT_MOC_LITERAL(13, 130, 12),
QT_MOC_LITERAL(14, 143, 1),
QT_MOC_LITERAL(15, 145, 16),
QT_MOC_LITERAL(16, 162, 18),
QT_MOC_LITERAL(17, 181, 15),
QT_MOC_LITERAL(18, 197, 12),
QT_MOC_LITERAL(19, 210, 14),
QT_MOC_LITERAL(20, 225, 17),
QT_MOC_LITERAL(21, 243, 10),
QT_MOC_LITERAL(22, 254, 12),
QT_MOC_LITERAL(23, 267, 15)
    },
    "ImageDisplay\0signalMouseMoved\0\0x\0y\0"
    "signalMousePressed\0signalRectDrawn\0"
    "imageRect\0loadImage\0img\0loadOverlay\0"
    "clearOverlay\0paintEvent\0QPaintEvent*\0"
    "e\0contextMenuEvent\0QContextMenuEvent*\0"
    "mousePressEvent\0QMouseEvent*\0"
    "mouseMoveEvent\0mouseReleaseEvent\0"
    "wheelEvent\0QWheelEvent*\0slotExportImage\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06,
       5,    2,   84,    2, 0x06,
       6,    1,   89,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    1,   92,    2, 0x0a,
      10,    1,   95,    2, 0x0a,
      11,    0,   98,    2, 0x0a,
      12,    1,   99,    2, 0x09,
      15,    1,  102,    2, 0x09,
      17,    1,  105,    2, 0x09,
      19,    1,  108,    2, 0x09,
      20,    1,  111,    2, 0x09,
      21,    1,  114,    2, 0x09,
      23,    0,  117,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::QRectF,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    9,
    QMetaType::Bool, QMetaType::QImage,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   14,
    QMetaType::Void, 0x80000000 | 18,   14,
    QMetaType::Void, 0x80000000 | 18,   14,
    QMetaType::Void, 0x80000000 | 18,   14,
    QMetaType::Void, 0x80000000 | 22,   14,
    QMetaType::Void,

       0        // eod
};

void ImageDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageDisplay *_t = static_cast<ImageDisplay *>(_o);
        switch (_id) {
        case 0: _t->signalMouseMoved((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->signalMousePressed((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->signalRectDrawn((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 3: _t->loadImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 4: { bool _r = _t->loadOverlay((*reinterpret_cast< const QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->clearOverlay(); break;
        case 6: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 7: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 8: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 9: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 10: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 12: _t->slotExportImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImageDisplay::*_t)(float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageDisplay::signalMouseMoved)) {
                *result = 0;
            }
        }
        {
            typedef void (ImageDisplay::*_t)(float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageDisplay::signalMousePressed)) {
                *result = 1;
            }
        }
        {
            typedef void (ImageDisplay::*_t)(QRectF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageDisplay::signalRectDrawn)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ImageDisplay::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ImageDisplay.data,
      qt_meta_data_ImageDisplay,  qt_static_metacall, 0, 0}
};


const QMetaObject *ImageDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageDisplay.stringdata))
        return static_cast<void*>(const_cast< ImageDisplay*>(this));
    return QFrame::qt_metacast(_clname);
}

int ImageDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ImageDisplay::signalMouseMoved(float _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ImageDisplay::signalMousePressed(float _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ImageDisplay::signalRectDrawn(QRectF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
