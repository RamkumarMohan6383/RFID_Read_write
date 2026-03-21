/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MIFARE_CLASSIC_RFID/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[28];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "on_BtnRead_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "on_BtnWrite_clicked"
QT_MOC_LITERAL(4, 51, 21), // "on_BtnReadAll_clicked"
QT_MOC_LITERAL(5, 73, 10), // "logMessage"
QT_MOC_LITERAL(6, 84, 4), // "text"
QT_MOC_LITERAL(7, 89, 5), // "color"
QT_MOC_LITERAL(8, 95, 9), // "formatStr"
QT_MOC_LITERAL(9, 105, 3), // "str"
QT_MOC_LITERAL(10, 109, 10), // "convertStr"
QT_MOC_LITERAL(11, 120, 14), // "unsigned char*"
QT_MOC_LITERAL(12, 135, 5), // "after"
QT_MOC_LITERAL(13, 141, 6), // "before"
QT_MOC_LITERAL(14, 148, 6), // "length"
QT_MOC_LITERAL(15, 155, 11), // "beepSuccess"
QT_MOC_LITERAL(16, 167, 9), // "beepError"
QT_MOC_LITERAL(17, 177, 11), // "writeSector"
QT_MOC_LITERAL(18, 189, 10), // "startBlock"
QT_MOC_LITERAL(19, 200, 3), // "raw"
QT_MOC_LITERAL(20, 204, 10), // "readSector"
QT_MOC_LITERAL(21, 215, 11), // "QByteArray&"
QT_MOC_LITERAL(22, 227, 7), // "outData"
QT_MOC_LITERAL(23, 235, 10), // "detectCard"
QT_MOC_LITERAL(24, 246, 8), // "QString&"
QT_MOC_LITERAL(25, 255, 6), // "cardId"
QT_MOC_LITERAL(26, 262, 20), // "on_Clear_Log_clicked"
QT_MOC_LITERAL(27, 283, 23) // "on_BtnReadAll_2_clicked"

    },
    "MainWindow\0on_BtnRead_clicked\0\0"
    "on_BtnWrite_clicked\0on_BtnReadAll_clicked\0"
    "logMessage\0text\0color\0formatStr\0str\0"
    "convertStr\0unsigned char*\0after\0before\0"
    "length\0beepSuccess\0beepError\0writeSector\0"
    "startBlock\0raw\0readSector\0QByteArray&\0"
    "outData\0detectCard\0QString&\0cardId\0"
    "on_Clear_Log_clicked\0on_BtnReadAll_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    2,   82,    2, 0x08 /* Private */,
       8,    1,   87,    2, 0x08 /* Private */,
      10,    3,   90,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    2,   99,    2, 0x08 /* Private */,
      20,    2,  104,    2, 0x08 /* Private */,
      23,    1,  109,    2, 0x08 /* Private */,
      26,    0,  112,    2, 0x08 /* Private */,
      27,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    6,    7,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString, QMetaType::Int,   12,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int, QMetaType::QByteArray,   18,   19,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 21,   18,   22,
    QMetaType::Bool, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtnRead_clicked(); break;
        case 1: _t->on_BtnWrite_clicked(); break;
        case 2: _t->on_BtnReadAll_clicked(); break;
        case 3: _t->logMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 4: { QString _r = _t->formatStr((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->convertStr((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->beepSuccess(); break;
        case 7: _t->beepError(); break;
        case 8: { bool _r = _t->writeSector((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->readSector((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->detectCard((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->on_Clear_Log_clicked(); break;
        case 12: _t->on_BtnReadAll_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
