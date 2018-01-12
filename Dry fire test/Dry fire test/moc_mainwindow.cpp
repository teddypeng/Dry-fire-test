/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 11),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 19),
QT_MOC_LITERAL(4, 44, 17),
QT_MOC_LITERAL(5, 62, 23),
QT_MOC_LITERAL(6, 86, 4),
QT_MOC_LITERAL(7, 91, 8),
QT_MOC_LITERAL(8, 100, 5),
QT_MOC_LITERAL(9, 106, 11),
QT_MOC_LITERAL(10, 118, 19),
QT_MOC_LITERAL(11, 138, 17),
QT_MOC_LITERAL(12, 156, 17),
QT_MOC_LITERAL(13, 174, 17),
QT_MOC_LITERAL(14, 192, 17),
QT_MOC_LITERAL(15, 210, 17),
QT_MOC_LITERAL(16, 228, 17),
QT_MOC_LITERAL(17, 246, 17),
QT_MOC_LITERAL(18, 264, 17),
QT_MOC_LITERAL(19, 282, 17),
QT_MOC_LITERAL(20, 300, 18),
QT_MOC_LITERAL(21, 319, 18)
    },
    "MainWindow\0timerUpdate\0\0on_btnStart_clicked\0"
    "on_btnEnd_clicked\0on_spinBox_valueChanged\0"
    "arg1\0updateUI\0times\0myInterrupt\0"
    "on_btnClear_clicked\0on_btn1_1_clicked\0"
    "on_btn1_2_clicked\0on_btn1_3_clicked\0"
    "on_btn1_4_clicked\0on_btn1_5_clicked\0"
    "on_btn1_6_clicked\0on_btn1_7_clicked\0"
    "on_btn1_8_clicked\0on_btn1_9_clicked\0"
    "on_btn1_10_clicked\0on_btn1_11_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    1,  107,    2, 0x08 /* Private */,
       7,    1,  110,    2, 0x08 /* Private */,
       9,    0,  113,    2, 0x08 /* Private */,
      10,    0,  114,    2, 0x08 /* Private */,
      11,    0,  115,    2, 0x08 /* Private */,
      12,    0,  116,    2, 0x08 /* Private */,
      13,    0,  117,    2, 0x08 /* Private */,
      14,    0,  118,    2, 0x08 /* Private */,
      15,    0,  119,    2, 0x08 /* Private */,
      16,    0,  120,    2, 0x08 /* Private */,
      17,    0,  121,    2, 0x08 /* Private */,
      18,    0,  122,    2, 0x08 /* Private */,
      19,    0,  123,    2, 0x08 /* Private */,
      20,    0,  124,    2, 0x08 /* Private */,
      21,    0,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->timerUpdate(); break;
        case 1: _t->on_btnStart_clicked(); break;
        case 2: _t->on_btnEnd_clicked(); break;
        case 3: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateUI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->myInterrupt(); break;
        case 6: _t->on_btnClear_clicked(); break;
        case 7: _t->on_btn1_1_clicked(); break;
        case 8: _t->on_btn1_2_clicked(); break;
        case 9: _t->on_btn1_3_clicked(); break;
        case 10: _t->on_btn1_4_clicked(); break;
        case 11: _t->on_btn1_5_clicked(); break;
        case 12: _t->on_btn1_6_clicked(); break;
        case 13: _t->on_btn1_7_clicked(); break;
        case 14: _t->on_btn1_8_clicked(); break;
        case 15: _t->on_btn1_9_clicked(); break;
        case 16: _t->on_btn1_10_clicked(); break;
        case 17: _t->on_btn1_11_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
