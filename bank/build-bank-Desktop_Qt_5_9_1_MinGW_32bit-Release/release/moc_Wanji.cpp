/****************************************************************************
** Meta object code from reading C++ file 'Wanji.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bank/Wanji.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Wanji.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Wanji_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Wanji_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Wanji_t qt_meta_stringdata_Wanji = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Wanji"
QT_MOC_LITERAL(1, 6, 16), // "on_close_clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "on_signin_pressed"
QT_MOC_LITERAL(4, 42, 18) // "on_signin_released"

    },
    "Wanji\0on_close_clicked\0\0on_signin_pressed\0"
    "on_signin_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Wanji[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Wanji::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Wanji *_t = static_cast<Wanji *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_clicked(); break;
        case 1: _t->on_signin_pressed(); break;
        case 2: _t->on_signin_released(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Wanji::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Wanji.data,
      qt_meta_data_Wanji,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Wanji::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Wanji::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Wanji.stringdata0))
        return static_cast<void*>(const_cast< Wanji*>(this));
    return QDialog::qt_metacast(_clname);
}

int Wanji::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
