/****************************************************************************
** Meta object code from reading C++ file 'user_manegment_win.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../user_manegment_win.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user_manegment_win.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_user_manegment_win_t {
    QByteArrayData data[16];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_manegment_win_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_manegment_win_t qt_meta_stringdata_user_manegment_win = {
    {
QT_MOC_LITERAL(0, 0, 18), // "user_manegment_win"
QT_MOC_LITERAL(1, 19, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 25), // "on_userstable_cellClicked"
QT_MOC_LITERAL(4, 68, 3), // "row"
QT_MOC_LITERAL(5, 72, 6), // "column"
QT_MOC_LITERAL(6, 79, 21), // "on_deleteuser_clicked"
QT_MOC_LITERAL(7, 101, 18), // "on_adduser_clicked"
QT_MOC_LITERAL(8, 120, 12), // "adduser_slot"
QT_MOC_LITERAL(9, 133, 5), // "_name"
QT_MOC_LITERAL(10, 139, 9), // "_lastname"
QT_MOC_LITERAL(11, 149, 9), // "_username"
QT_MOC_LITERAL(12, 159, 9), // "_password"
QT_MOC_LITERAL(13, 169, 6), // "_email"
QT_MOC_LITERAL(14, 176, 3), // "_id"
QT_MOC_LITERAL(15, 180, 6) // "_birth"

    },
    "user_manegment_win\0on_pushButton_clicked\0"
    "\0on_userstable_cellClicked\0row\0column\0"
    "on_deleteuser_clicked\0on_adduser_clicked\0"
    "adduser_slot\0_name\0_lastname\0_username\0"
    "_password\0_email\0_id\0_birth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_user_manegment_win[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    2,   40,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    7,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QDate,    9,   10,   11,   12,   13,   14,   15,

       0        // eod
};

void user_manegment_win::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<user_manegment_win *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_userstable_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_deleteuser_clicked(); break;
        case 3: _t->on_adduser_clicked(); break;
        case 4: _t->adduser_slot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QDate(*)>(_a[7]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject user_manegment_win::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_user_manegment_win.data,
    qt_meta_data_user_manegment_win,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *user_manegment_win::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user_manegment_win::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_user_manegment_win.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int user_manegment_win::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
