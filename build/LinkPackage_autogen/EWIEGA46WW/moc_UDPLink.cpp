/****************************************************************************
** Meta object code from reading C++ file 'UDPLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UDPLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UDPLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UDPConfiguration_t {
    QByteArrayData data[8];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPConfiguration_t qt_meta_stringdata_UDPConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 16), // "UDPConfiguration"
QT_MOC_LITERAL(1, 17, 16), // "localPortChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "addHost"
QT_MOC_LITERAL(4, 43, 4), // "host"
QT_MOC_LITERAL(5, 48, 4), // "port"
QT_MOC_LITERAL(6, 53, 10), // "removeHost"
QT_MOC_LITERAL(7, 64, 9) // "localPort"

    },
    "UDPConfiguration\0localPortChanged\0\0"
    "addHost\0host\0port\0removeHost\0localPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPConfiguration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x02 /* Public */,
       3,    2,   43,    2, 0x02 /* Public */,
       6,    1,   48,    2, 0x02 /* Public */,
       6,    2,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    4,    5,

 // properties: name, type, flags
       7, QMetaType::UShort, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void UDPConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UDPConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localPortChanged(); break;
        case 1: _t->addHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addHost((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 3: _t->removeHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->removeHost((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UDPConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDPConfiguration::localPortChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UDPConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->localPort(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UDPConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalPort(*reinterpret_cast< quint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UDPConfiguration::staticMetaObject = { {
    &LinkConfiguration::staticMetaObject,
    qt_meta_stringdata_UDPConfiguration.data,
    qt_meta_data_UDPConfiguration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UDPConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDPConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int UDPConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UDPConfiguration::localPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_UDPWorker_t {
    QByteArrayData data[21];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPWorker_t qt_meta_stringdata_UDPWorker = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UDPWorker"
QT_MOC_LITERAL(1, 10, 9), // "connected"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "disconnected"
QT_MOC_LITERAL(4, 34, 13), // "errorOccurred"
QT_MOC_LITERAL(5, 48, 11), // "errorString"
QT_MOC_LITERAL(6, 60, 12), // "dataReceived"
QT_MOC_LITERAL(7, 73, 4), // "data"
QT_MOC_LITERAL(8, 78, 8), // "dataSent"
QT_MOC_LITERAL(9, 87, 11), // "setupSocket"
QT_MOC_LITERAL(10, 99, 11), // "connectLink"
QT_MOC_LITERAL(11, 111, 14), // "disconnectLink"
QT_MOC_LITERAL(12, 126, 9), // "writeData"
QT_MOC_LITERAL(13, 136, 18), // "_onSocketConnected"
QT_MOC_LITERAL(14, 155, 21), // "_onSocketDisconnected"
QT_MOC_LITERAL(15, 177, 18), // "_onSocketReadyRead"
QT_MOC_LITERAL(16, 196, 21), // "_onSocketBytesWritten"
QT_MOC_LITERAL(17, 218, 5), // "bytes"
QT_MOC_LITERAL(18, 224, 22), // "_onSocketErrorOccurred"
QT_MOC_LITERAL(19, 247, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(20, 276, 11) // "socketError"

    },
    "UDPWorker\0connected\0\0disconnected\0"
    "errorOccurred\0errorString\0dataReceived\0"
    "data\0dataSent\0setupSocket\0connectLink\0"
    "disconnectLink\0writeData\0_onSocketConnected\0"
    "_onSocketDisconnected\0_onSocketReadyRead\0"
    "_onSocketBytesWritten\0bytes\0"
    "_onSocketErrorOccurred\0"
    "QAbstractSocket::SocketError\0socketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    1,   86,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,
       8,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   95,    2, 0x0a /* Public */,
      10,    0,   96,    2, 0x0a /* Public */,
      11,    0,   97,    2, 0x0a /* Public */,
      12,    1,   98,    2, 0x0a /* Public */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    1,  104,    2, 0x08 /* Private */,
      18,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, QMetaType::QByteArray,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   17,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void UDPWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UDPWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->errorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->dataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->dataSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->setupSocket(); break;
        case 6: _t->connectLink(); break;
        case 7: _t->disconnectLink(); break;
        case 8: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 9: _t->_onSocketConnected(); break;
        case 10: _t->_onSocketDisconnected(); break;
        case 11: _t->_onSocketReadyRead(); break;
        case 12: _t->_onSocketBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 13: _t->_onSocketErrorOccurred((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UDPWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDPWorker::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UDPWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDPWorker::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UDPWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDPWorker::errorOccurred)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UDPWorker::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDPWorker::dataReceived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UDPWorker::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDPWorker::dataSent)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UDPWorker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_UDPWorker.data,
    qt_meta_data_UDPWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UDPWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDPWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UDPWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void UDPWorker::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UDPWorker::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UDPWorker::errorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UDPWorker::dataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UDPWorker::dataSent(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_UDPLink_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPLink_t qt_meta_stringdata_UDPLink = {
    {
QT_MOC_LITERAL(0, 0, 7), // "UDPLink"
QT_MOC_LITERAL(1, 8, 11), // "_writeBytes"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "data"
QT_MOC_LITERAL(4, 26, 12), // "_onConnected"
QT_MOC_LITERAL(5, 39, 15), // "_onDisconnected"
QT_MOC_LITERAL(6, 55, 16), // "_onErrorOccurred"
QT_MOC_LITERAL(7, 72, 11), // "errorString"
QT_MOC_LITERAL(8, 84, 15), // "_onDataReceived"
QT_MOC_LITERAL(9, 100, 11) // "_onDataSent"

    },
    "UDPLink\0_writeBytes\0\0data\0_onConnected\0"
    "_onDisconnected\0_onErrorOccurred\0"
    "errorString\0_onDataReceived\0_onDataSent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPLink[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void UDPLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UDPLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->_onConnected(); break;
        case 2: _t->_onDisconnected(); break;
        case 3: _t->_onErrorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->_onDataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->_onDataSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UDPLink::staticMetaObject = { {
    &LinkInterface::staticMetaObject,
    qt_meta_stringdata_UDPLink.data,
    qt_meta_data_UDPLink,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UDPLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDPLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int UDPLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
