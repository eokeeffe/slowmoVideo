/****************************************************************************
** Meta object code from reading C++ file 'videoFrameSource_sV.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/slowmoVideo/project/videoFrameSource_sV.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoFrameSource_sV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VideoFrameSource_sV_t {
    QByteArrayData data[10];
    char stringdata[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_VideoFrameSource_sV_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_VideoFrameSource_sV_t qt_meta_stringdata_VideoFrameSource_sV = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 31),
QT_MOC_LITERAL(2, 52, 0),
QT_MOC_LITERAL(3, 53, 32),
QT_MOC_LITERAL(4, 86, 23),
QT_MOC_LITERAL(5, 110, 20),
QT_MOC_LITERAL(6, 131, 21),
QT_MOC_LITERAL(7, 153, 22),
QT_MOC_LITERAL(8, 176, 26),
QT_MOC_LITERAL(9, 203, 18)
    },
    "VideoFrameSource_sV\0signalExtractOrigFramesFinished\0"
    "\0signalExtractSmallFramesFinished\0"
    "slotAbortInitialization\0slotUpdateProjectDir\0"
    "slotExtractOrigFrames\0slotExtractSmallFrames\0"
    "slotInitializationFinished\0"
    "slotProgressUpdate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoFrameSource_sV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06,
       3,    0,   55,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x0a,
       5,    0,   57,    2, 0x0a,
       6,    0,   58,    2, 0x08,
       7,    0,   59,    2, 0x08,
       8,    0,   60,    2, 0x08,
       9,    0,   61,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VideoFrameSource_sV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoFrameSource_sV *_t = static_cast<VideoFrameSource_sV *>(_o);
        switch (_id) {
        case 0: _t->signalExtractOrigFramesFinished(); break;
        case 1: _t->signalExtractSmallFramesFinished(); break;
        case 2: _t->slotAbortInitialization(); break;
        case 3: _t->slotUpdateProjectDir(); break;
        case 4: _t->slotExtractOrigFrames(); break;
        case 5: _t->slotExtractSmallFrames(); break;
        case 6: _t->slotInitializationFinished(); break;
        case 7: _t->slotProgressUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoFrameSource_sV::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoFrameSource_sV::signalExtractOrigFramesFinished)) {
                *result = 0;
            }
        }
        {
            typedef void (VideoFrameSource_sV::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoFrameSource_sV::signalExtractSmallFramesFinished)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject VideoFrameSource_sV::staticMetaObject = {
    { &AbstractFrameSource_sV::staticMetaObject, qt_meta_stringdata_VideoFrameSource_sV.data,
      qt_meta_data_VideoFrameSource_sV,  qt_static_metacall, 0, 0}
};


const QMetaObject *VideoFrameSource_sV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoFrameSource_sV::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VideoFrameSource_sV.stringdata))
        return static_cast<void*>(const_cast< VideoFrameSource_sV*>(this));
    return AbstractFrameSource_sV::qt_metacast(_clname);
}

int VideoFrameSource_sV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractFrameSource_sV::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void VideoFrameSource_sV::signalExtractOrigFramesFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void VideoFrameSource_sV::signalExtractSmallFramesFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
