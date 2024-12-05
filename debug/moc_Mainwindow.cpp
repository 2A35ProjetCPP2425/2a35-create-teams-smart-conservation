/****************************************************************************
** Meta object code from reading C++ file 'Mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[44];
    char stringdata0[371];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 24), // "on_pushButton_13_clicked"
QT_MOC_LITERAL(62, 18), // "on_charger_clicked"
QT_MOC_LITERAL(81, 23), // "on_comboBox_2_activated"
QT_MOC_LITERAL(105, 5), // "index"
QT_MOC_LITERAL(111, 25), // "on_lineEdit_2_textChanged"
QT_MOC_LITERAL(137, 4), // "arg1"
QT_MOC_LITERAL(142, 16), // "on_searchTimeout"
QT_MOC_LITERAL(159, 12), // "update_label"
QT_MOC_LITERAL(172, 19), // "on_exporter_clicked"
QT_MOC_LITERAL(192, 24), // "on_pushButton_29_clicked"
QT_MOC_LITERAL(217, 24), // "on_pushButton_34_clicked"
QT_MOC_LITERAL(242, 24), // "on_pushButton_35_clicked"
QT_MOC_LITERAL(267, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(292, 15), // "ajouterCommande"
QT_MOC_LITERAL(308, 4), // "idcl"
QT_MOC_LITERAL(313, 3), // "idc"
QT_MOC_LITERAL(317, 16), // "onWeightDetected"
QT_MOC_LITERAL(334, 6), // "weight"
QT_MOC_LITERAL(341, 29) // "on_pushButton_Ajouter_clicked"

    },
    "MainWindow\0on_pushButton_10_clicked\0"
    "\0on_pushButton_13_clicked\0on_charger_clicked\0"
    "on_comboBox_2_activated\0index\0"
    "on_lineEdit_2_textChanged\0arg1\0"
    "on_searchTimeout\0update_label\0"
    "on_exporter_clicked\0on_pushButton_29_clicked\0"
    "on_pushButton_34_clicked\0"
    "on_pushButton_35_clicked\0"
    "on_pushButton_11_clicked\0ajouterCommande\0"
    "idcl\0idc\0onWeightDetected\0weight\0"
    "on_pushButton_Ajouter_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    0,  105,    2, 0x08,    2 /* Private */,
       4,    0,  106,    2, 0x08,    3 /* Private */,
       5,    1,  107,    2, 0x08,    4 /* Private */,
       7,    1,  110,    2, 0x08,    6 /* Private */,
       9,    0,  113,    2, 0x08,    8 /* Private */,
      10,    0,  114,    2, 0x08,    9 /* Private */,
      11,    0,  115,    2, 0x08,   10 /* Private */,
      12,    0,  116,    2, 0x08,   11 /* Private */,
      13,    0,  117,    2, 0x08,   12 /* Private */,
      14,    0,  118,    2, 0x08,   13 /* Private */,
      15,    0,  119,    2, 0x08,   14 /* Private */,
      16,    2,  120,    2, 0x08,   15 /* Private */,
      19,    1,  125,    2, 0x08,   18 /* Private */,
      21,    0,  128,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_10_clicked(); break;
        case 1: _t->on_pushButton_13_clicked(); break;
        case 2: _t->on_charger_clicked(); break;
        case 3: _t->on_comboBox_2_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_lineEdit_2_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_searchTimeout(); break;
        case 6: _t->update_label(); break;
        case 7: _t->on_exporter_clicked(); break;
        case 8: _t->on_pushButton_29_clicked(); break;
        case 9: _t->on_pushButton_34_clicked(); break;
        case 10: _t->on_pushButton_35_clicked(); break;
        case 11: _t->on_pushButton_11_clicked(); break;
        case 12: { bool _r = _t->ajouterCommande((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->onWeightDetected((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->on_pushButton_Ajouter_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
