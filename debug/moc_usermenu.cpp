/****************************************************************************
** Meta object code from reading C++ file 'usermenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../usermenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_usermenu_t {
    QByteArrayData data[21];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_usermenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_usermenu_t qt_meta_stringdata_usermenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "usermenu"
QT_MOC_LITERAL(1, 9, 17), // "on_newbtn_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "on_exitpbn_clicked"
QT_MOC_LITERAL(4, 47, 22), // "on_accountspbn_clicked"
QT_MOC_LITERAL(5, 70, 11), // "adding_slot"
QT_MOC_LITERAL(6, 82, 8), // "_balance"
QT_MOC_LITERAL(7, 91, 5), // "_type"
QT_MOC_LITERAL(8, 97, 16), // "QVector<QString>"
QT_MOC_LITERAL(9, 114, 12), // "_addallusers"
QT_MOC_LITERAL(10, 127, 18), // "on_editpbn_clicked"
QT_MOC_LITERAL(11, 146, 12), // "editing_slot"
QT_MOC_LITERAL(12, 159, 5), // "_name"
QT_MOC_LITERAL(13, 165, 9), // "_lastname"
QT_MOC_LITERAL(14, 175, 9), // "_username"
QT_MOC_LITERAL(15, 185, 9), // "_password"
QT_MOC_LITERAL(16, 195, 6), // "_email"
QT_MOC_LITERAL(17, 202, 3), // "_id"
QT_MOC_LITERAL(18, 206, 6), // "_birth"
QT_MOC_LITERAL(19, 213, 20), // "on_sessiopbn_clicked"
QT_MOC_LITERAL(20, 234, 18) // "on_infopbn_clicked"

    },
    "usermenu\0on_newbtn_clicked\0\0"
    "on_exitpbn_clicked\0on_accountspbn_clicked\0"
    "adding_slot\0_balance\0_type\0QVector<QString>\0"
    "_addallusers\0on_editpbn_clicked\0"
    "editing_slot\0_name\0_lastname\0_username\0"
    "_password\0_email\0_id\0_birth\0"
    "on_sessiopbn_clicked\0on_infopbn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_usermenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    3,   57,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    7,   65,    2, 0x08 /* Private */,
      19,    0,   80,    2, 0x08 /* Private */,
      20,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 8,    6,    7,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QDate,   12,   13,   14,   15,   16,   17,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void usermenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<usermenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_newbtn_clicked(); break;
        case 1: _t->on_exitpbn_clicked(); break;
        case 2: _t->on_accountspbn_clicked(); break;
        case 3: _t->adding_slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QVector<QString>(*)>(_a[3]))); break;
        case 4: _t->on_editpbn_clicked(); break;
        case 5: _t->editing_slot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QDate(*)>(_a[7]))); break;
        case 6: _t->on_sessiopbn_clicked(); break;
        case 7: _t->on_infopbn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject usermenu::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_usermenu.data,
    qt_meta_data_usermenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *usermenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *usermenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_usermenu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int usermenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
