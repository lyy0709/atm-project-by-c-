/****************************************************************************
** Meta object code from reading C++ file 'Signin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bank/Signin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Signin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Signin_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Signin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Signin_t qt_meta_stringdata_Signin = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Signin"
QT_MOC_LITERAL(1, 7, 15), // "on_mini_clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "on_close_clicked"
QT_MOC_LITERAL(4, 41, 18), // "on_zhucexx_clicked"
QT_MOC_LITERAL(5, 60, 16), // "on_wanji_clicked"
QT_MOC_LITERAL(6, 77, 17), // "on_signin_pressed"
QT_MOC_LITERAL(7, 95, 18), // "on_signin_released"
QT_MOC_LITERAL(8, 114, 14) // "on_gly_clicked"

    },
    "Signin\0on_mini_clicked\0\0on_close_clicked\0"
    "on_zhucexx_clicked\0on_wanji_clicked\0"
    "on_signin_pressed\0on_signin_released\0"
    "on_gly_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Signin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Signin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Signin *_t = static_cast<Signin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_mini_clicked(); break;
        case 1: _t->on_close_clicked(); break;
        case 2: _t->on_zhucexx_clicked(); break;
        case 3: _t->on_wanji_clicked(); break;
        case 4: _t->on_signin_pressed(); break;
        case 5: _t->on_signin_released(); break;
        case 6: _t->on_gly_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Signin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Signin.data,
      qt_meta_data_Signin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Signin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Signin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Signin.stringdata0))
        return static_cast<void*>(const_cast< Signin*>(this));
    return QDialog::qt_metacast(_clname);
}

int Signin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
