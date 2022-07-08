/****************************************************************************
** Meta object code from reading C++ file 'worker_message.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../project_management/worker_message.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'worker_message.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_worker_message_t {
    QByteArrayData data[7];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_worker_message_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_worker_message_t qt_meta_stringdata_worker_message = {
    {
QT_MOC_LITERAL(0, 0, 14), // "worker_message"
QT_MOC_LITERAL(1, 15, 13), // "workRequested"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "valueChanged"
QT_MOC_LITERAL(4, 43, 8), // "finished"
QT_MOC_LITERAL(5, 52, 5), // "clear"
QT_MOC_LITERAL(6, 58, 6) // "doWork"

    },
    "worker_message\0workRequested\0\0"
    "valueChanged\0finished\0clear\0doWork"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_worker_message[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       4,    0,   43,    2, 0x06 /* Public */,
       5,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void worker_message::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<worker_message *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->workRequested(); break;
        case 1: _t->valueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->finished(); break;
        case 3: _t->clear(); break;
        case 4: _t->doWork(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (worker_message::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_message::workRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (worker_message::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_message::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (worker_message::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_message::finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (worker_message::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_message::clear)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject worker_message::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_worker_message.data,
    qt_meta_data_worker_message,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *worker_message::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *worker_message::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_worker_message.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int worker_message::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void worker_message::workRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void worker_message::valueChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void worker_message::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void worker_message::clear()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
