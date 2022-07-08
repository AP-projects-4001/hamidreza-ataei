/****************************************************************************
** Meta object code from reading C++ file 'overall_status.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../project_management/overall_status.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overall_status.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_overall_status_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_overall_status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_overall_status_t qt_meta_stringdata_overall_status = {
    {
QT_MOC_LITERAL(0, 0, 14), // "overall_status"
QT_MOC_LITERAL(1, 15, 9), // "set_users"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "t_name"
QT_MOC_LITERAL(4, 33, 9), // "set_tasks"
QT_MOC_LITERAL(5, 43, 11), // "clear_users"
QT_MOC_LITERAL(6, 55, 11) // "clear_tasks"

    },
    "overall_status\0set_users\0\0t_name\0"
    "set_tasks\0clear_users\0clear_tasks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_overall_status[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    0,   40,    2, 0x08 /* Private */,
       6,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void overall_status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<overall_status *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_users((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->set_tasks((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->clear_users(); break;
        case 3: _t->clear_tasks(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject overall_status::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_overall_status.data,
    qt_meta_data_overall_status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *overall_status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *overall_status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_overall_status.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int overall_status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
