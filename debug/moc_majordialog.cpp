/****************************************************************************
** Meta object code from reading C++ file 'majordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Major/majordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'majordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MajorDialog_t {
    QByteArrayData data[13];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MajorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MajorDialog_t qt_meta_stringdata_MajorDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MajorDialog"
QT_MOC_LITERAL(1, 12, 17), // "refreshMainWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "refresh"
QT_MOC_LITERAL(4, 39, 28), // "on_insert_pushButton_clicked"
QT_MOC_LITERAL(5, 68, 28), // "on_delete_pushButton_clicked"
QT_MOC_LITERAL(6, 97, 28), // "on_update_pushButton_clicked"
QT_MOC_LITERAL(7, 126, 26), // "on_undo_pushButton_clicked"
QT_MOC_LITERAL(8, 153, 26), // "on_redo_pushButton_clicked"
QT_MOC_LITERAL(9, 180, 12), // "refreshTable"
QT_MOC_LITERAL(10, 193, 21), // "refreshDoButtonStatus"
QT_MOC_LITERAL(11, 215, 10), // "sortColumn"
QT_MOC_LITERAL(12, 226, 3) // "col"

    },
    "MajorDialog\0refreshMainWindow\0\0refresh\0"
    "on_insert_pushButton_clicked\0"
    "on_delete_pushButton_clicked\0"
    "on_update_pushButton_clicked\0"
    "on_undo_pushButton_clicked\0"
    "on_redo_pushButton_clicked\0refreshTable\0"
    "refreshDoButtonStatus\0sortColumn\0col"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MajorDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void MajorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MajorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshMainWindow(); break;
        case 1: _t->refresh(); break;
        case 2: _t->on_insert_pushButton_clicked(); break;
        case 3: _t->on_delete_pushButton_clicked(); break;
        case 4: _t->on_update_pushButton_clicked(); break;
        case 5: _t->on_undo_pushButton_clicked(); break;
        case 6: _t->on_redo_pushButton_clicked(); break;
        case 7: _t->refreshTable(); break;
        case 8: _t->refreshDoButtonStatus(); break;
        case 9: _t->sortColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MajorDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MajorDialog::refreshMainWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MajorDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_MajorDialog.data,
    qt_meta_data_MajorDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MajorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MajorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MajorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MajorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MajorDialog::refreshMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
