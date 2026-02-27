/****************************************************************************
** Meta object code from reading C++ file 'linkinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../linkinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'linkinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinkInterface_t {
    QByteArrayData data[15];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkInterface_t qt_meta_stringdata_LinkInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LinkInterface"
QT_MOC_LITERAL(1, 14, 13), // "bytesReceived"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 44, 4), // "link"
QT_MOC_LITERAL(5, 49, 4), // "data"
QT_MOC_LITERAL(6, 54, 9), // "bytesSent"
QT_MOC_LITERAL(7, 64, 9), // "connected"
QT_MOC_LITERAL(8, 74, 12), // "disconnected"
QT_MOC_LITERAL(9, 87, 18), // "communicationError"
QT_MOC_LITERAL(10, 106, 5), // "title"
QT_MOC_LITERAL(11, 112, 5), // "error"
QT_MOC_LITERAL(12, 118, 11), // "_writeBytes"
QT_MOC_LITERAL(13, 130, 5), // "bytes"
QT_MOC_LITERAL(14, 136, 10) // "disconnect"

    },
    "LinkInterface\0bytesReceived\0\0"
    "LinkInterface*\0link\0data\0bytesSent\0"
    "connected\0disconnected\0communicationError\0"
    "title\0error\0_writeBytes\0bytes\0disconnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    2,   54,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    2,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   66,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    0,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,   13,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void LinkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bytesReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->bytesSent((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->connected(); break;
        case 3: _t->disconnected(); break;
        case 4: _t->communicationError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 6: _t->disconnect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinkInterface::*)(LinkInterface * , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::bytesReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LinkInterface::*)(LinkInterface * , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::bytesSent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LinkInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::connected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LinkInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::disconnected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LinkInterface::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::communicationError)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LinkInterface::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LinkInterface.data,
    qt_meta_data_LinkInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LinkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinkInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LinkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LinkInterface::bytesReceived(LinkInterface * _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkInterface::bytesSent(LinkInterface * _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LinkInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LinkInterface::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LinkInterface::communicationError(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
