/****************************************************************************
** Meta object code from reading C++ file 'SerialLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SerialLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialConfiguration_t {
    QByteArrayData data[22];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialConfiguration_t qt_meta_stringdata_SerialConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SerialConfiguration"
QT_MOC_LITERAL(1, 20, 11), // "baudChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "dataBitsChanged"
QT_MOC_LITERAL(4, 49, 18), // "flowControlChanged"
QT_MOC_LITERAL(5, 68, 15), // "stopBitsChanged"
QT_MOC_LITERAL(6, 84, 13), // "parityChanged"
QT_MOC_LITERAL(7, 98, 15), // "portNameChanged"
QT_MOC_LITERAL(8, 114, 22), // "portDisplayNameChanged"
QT_MOC_LITERAL(9, 137, 16), // "usbDirectChanged"
QT_MOC_LITERAL(10, 154, 4), // "baud"
QT_MOC_LITERAL(11, 159, 8), // "dataBits"
QT_MOC_LITERAL(12, 168, 21), // "QSerialPort::DataBits"
QT_MOC_LITERAL(13, 190, 11), // "flowControl"
QT_MOC_LITERAL(14, 202, 24), // "QSerialPort::FlowControl"
QT_MOC_LITERAL(15, 227, 8), // "stopBits"
QT_MOC_LITERAL(16, 236, 21), // "QSerialPort::StopBits"
QT_MOC_LITERAL(17, 258, 6), // "parity"
QT_MOC_LITERAL(18, 265, 19), // "QSerialPort::Parity"
QT_MOC_LITERAL(19, 285, 8), // "portName"
QT_MOC_LITERAL(20, 294, 15), // "portDisplayName"
QT_MOC_LITERAL(21, 310, 9) // "usbDirect"

    },
    "SerialConfiguration\0baudChanged\0\0"
    "dataBitsChanged\0flowControlChanged\0"
    "stopBitsChanged\0parityChanged\0"
    "portNameChanged\0portDisplayNameChanged\0"
    "usbDirectChanged\0baud\0dataBits\0"
    "QSerialPort::DataBits\0flowControl\0"
    "QSerialPort::FlowControl\0stopBits\0"
    "QSerialPort::StopBits\0parity\0"
    "QSerialPort::Parity\0portName\0"
    "portDisplayName\0usbDirect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialConfiguration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495103,
      11, 0x80000000 | 12, 0x0049510b,
      13, 0x80000000 | 14, 0x0049510b,
      15, 0x80000000 | 16, 0x0049510b,
      17, 0x80000000 | 18, 0x0049510b,
      19, QMetaType::QString, 0x00495103,
      20, QMetaType::QString, 0x00495001,
      21, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void SerialConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->baudChanged(); break;
        case 1: _t->dataBitsChanged(); break;
        case 2: _t->flowControlChanged(); break;
        case 3: _t->stopBitsChanged(); break;
        case 4: _t->parityChanged(); break;
        case 5: _t->portNameChanged(); break;
        case 6: _t->portDisplayNameChanged(); break;
        case 7: _t->usbDirectChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::baudChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::dataBitsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::flowControlChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::stopBitsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::parityChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::portNameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::portDisplayNameChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::usbDirectChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SerialConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = _t->baud(); break;
        case 1: *reinterpret_cast< QSerialPort::DataBits*>(_v) = _t->dataBits(); break;
        case 2: *reinterpret_cast< QSerialPort::FlowControl*>(_v) = _t->flowControl(); break;
        case 3: *reinterpret_cast< QSerialPort::StopBits*>(_v) = _t->stopBits(); break;
        case 4: *reinterpret_cast< QSerialPort::Parity*>(_v) = _t->parity(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->portName(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->portDisplayName(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->usbDirect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SerialConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBaud(*reinterpret_cast< qint32*>(_v)); break;
        case 1: _t->setDataBits(*reinterpret_cast< QSerialPort::DataBits*>(_v)); break;
        case 2: _t->setFlowControl(*reinterpret_cast< QSerialPort::FlowControl*>(_v)); break;
        case 3: _t->setStopBits(*reinterpret_cast< QSerialPort::StopBits*>(_v)); break;
        case 4: _t->setParity(*reinterpret_cast< QSerialPort::Parity*>(_v)); break;
        case 5: _t->setPortName(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setUsbDirect(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_SerialConfiguration[] = {
        &QSerialPort::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject SerialConfiguration::staticMetaObject = { {
    &LinkConfiguration::staticMetaObject,
    qt_meta_stringdata_SerialConfiguration.data,
    qt_meta_data_SerialConfiguration,
    qt_static_metacall,
    qt_meta_extradata_SerialConfiguration,
    nullptr
} };


const QMetaObject *SerialConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int SerialConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SerialConfiguration::baudChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialConfiguration::dataBitsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialConfiguration::flowControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SerialConfiguration::stopBitsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SerialConfiguration::parityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SerialConfiguration::portNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SerialConfiguration::portDisplayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SerialConfiguration::usbDirectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
struct qt_meta_stringdata_SerialWorker_t {
    QByteArrayData data[22];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialWorker_t qt_meta_stringdata_SerialWorker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SerialWorker"
QT_MOC_LITERAL(1, 13, 9), // "connected"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "disconnected"
QT_MOC_LITERAL(4, 37, 12), // "dataReceived"
QT_MOC_LITERAL(5, 50, 4), // "data"
QT_MOC_LITERAL(6, 55, 8), // "dataSent"
QT_MOC_LITERAL(7, 64, 13), // "errorOccurred"
QT_MOC_LITERAL(8, 78, 11), // "errorString"
QT_MOC_LITERAL(9, 90, 9), // "setupPort"
QT_MOC_LITERAL(10, 100, 13), // "connectToPort"
QT_MOC_LITERAL(11, 114, 18), // "disconnectFromPort"
QT_MOC_LITERAL(12, 133, 9), // "writeData"
QT_MOC_LITERAL(13, 143, 16), // "_onPortConnected"
QT_MOC_LITERAL(14, 160, 19), // "_onPortDisconnected"
QT_MOC_LITERAL(15, 180, 16), // "_onPortReadyRead"
QT_MOC_LITERAL(16, 197, 19), // "_onPortBytesWritten"
QT_MOC_LITERAL(17, 217, 5), // "bytes"
QT_MOC_LITERAL(18, 223, 20), // "_onPortErrorOccurred"
QT_MOC_LITERAL(19, 244, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(20, 273, 9), // "portError"
QT_MOC_LITERAL(21, 283, 22) // "_checkPortAvailability"

    },
    "SerialWorker\0connected\0\0disconnected\0"
    "dataReceived\0data\0dataSent\0errorOccurred\0"
    "errorString\0setupPort\0connectToPort\0"
    "disconnectFromPort\0writeData\0"
    "_onPortConnected\0_onPortDisconnected\0"
    "_onPortReadyRead\0_onPortBytesWritten\0"
    "bytes\0_onPortErrorOccurred\0"
    "QSerialPort::SerialPortError\0portError\0"
    "_checkPortAvailability"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    1,   91,    2, 0x06 /* Public */,
       6,    1,   94,    2, 0x06 /* Public */,
       7,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  100,    2, 0x0a /* Public */,
      10,    0,  101,    2, 0x0a /* Public */,
      11,    0,  102,    2, 0x0a /* Public */,
      12,    1,  103,    2, 0x0a /* Public */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      18,    1,  112,    2, 0x08 /* Private */,
      21,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,

       0        // eod
};

void SerialWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->dataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->dataSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->errorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setupPort(); break;
        case 6: _t->connectToPort(); break;
        case 7: _t->disconnectFromPort(); break;
        case 8: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 9: _t->_onPortConnected(); break;
        case 10: _t->_onPortDisconnected(); break;
        case 11: _t->_onPortReadyRead(); break;
        case 12: _t->_onPortBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 13: _t->_onPortErrorOccurred((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 14: _t->_checkPortAvailability(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::dataReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::dataSent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::errorOccurred)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SerialWorker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SerialWorker.data,
    qt_meta_data_SerialWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SerialWorker::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialWorker::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialWorker::dataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SerialWorker::dataSent(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SerialWorker::errorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_SerialLink_t {
    QByteArrayData data[10];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialLink_t qt_meta_stringdata_SerialLink = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SerialLink"
QT_MOC_LITERAL(1, 11, 10), // "disconnect"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "_onConnected"
QT_MOC_LITERAL(4, 36, 15), // "_onDisconnected"
QT_MOC_LITERAL(5, 52, 15), // "_onDataReceived"
QT_MOC_LITERAL(6, 68, 4), // "data"
QT_MOC_LITERAL(7, 73, 11), // "_onDataSent"
QT_MOC_LITERAL(8, 85, 16), // "_onErrorOccurred"
QT_MOC_LITERAL(9, 102, 11) // "errorString"

    },
    "SerialLink\0disconnect\0\0_onConnected\0"
    "_onDisconnected\0_onDataReceived\0data\0"
    "_onDataSent\0_onErrorOccurred\0errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialLink[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void SerialLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disconnect(); break;
        case 1: _t->_onConnected(); break;
        case 2: _t->_onDisconnected(); break;
        case 3: _t->_onDataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->_onDataSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->_onErrorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SerialLink::staticMetaObject = { {
    &LinkInterface::staticMetaObject,
    qt_meta_stringdata_SerialLink.data,
    qt_meta_data_SerialLink,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int SerialLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
