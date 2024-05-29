/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../smart_car/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[19];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 13), // "on_go_pressed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "on_go_released"
QT_MOC_LITERAL(4, 37, 15), // "on_buck_pressed"
QT_MOC_LITERAL(5, 53, 16), // "on_buck_released"
QT_MOC_LITERAL(6, 70, 20), // "on_turn_left_pressed"
QT_MOC_LITERAL(7, 91, 21), // "on_turn_left_released"
QT_MOC_LITERAL(8, 113, 21), // "on_turn_right_pressed"
QT_MOC_LITERAL(9, 135, 22), // "on_turn_right_released"
QT_MOC_LITERAL(10, 158, 13), // "keyPressEvent"
QT_MOC_LITERAL(11, 172, 10), // "QKeyEvent*"
QT_MOC_LITERAL(12, 183, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(13, 199, 8), // "ReadData"
QT_MOC_LITERAL(14, 208, 26), // "on_pushButton_star_clicked"
QT_MOC_LITERAL(15, 235, 11), // "my_time_out"
QT_MOC_LITERAL(16, 247, 25), // "on_pushButton_top_clicked"
QT_MOC_LITERAL(17, 273, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(18, 295, 8) // "Mynetted"

    },
    "Widget\0on_go_pressed\0\0on_go_released\0"
    "on_buck_pressed\0on_buck_released\0"
    "on_turn_left_pressed\0on_turn_left_released\0"
    "on_turn_right_pressed\0on_turn_right_released\0"
    "keyPressEvent\0QKeyEvent*\0keyReleaseEvent\0"
    "ReadData\0on_pushButton_star_clicked\0"
    "my_time_out\0on_pushButton_top_clicked\0"
    "on_pushButton_clicked\0Mynetted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    1,  102,    2, 0x08 /* Private */,
      12,    1,  105,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x08 /* Private */,
      16,    0,  111,    2, 0x08 /* Private */,
      17,    0,  112,    2, 0x08 /* Private */,
      18,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_go_pressed(); break;
        case 1: _t->on_go_released(); break;
        case 2: _t->on_buck_pressed(); break;
        case 3: _t->on_buck_released(); break;
        case 4: _t->on_turn_left_pressed(); break;
        case 5: _t->on_turn_left_released(); break;
        case 6: _t->on_turn_right_pressed(); break;
        case 7: _t->on_turn_right_released(); break;
        case 8: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 9: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 10: _t->ReadData(); break;
        case 11: _t->on_pushButton_star_clicked(); break;
        case 12: _t->my_time_out(); break;
        case 13: _t->on_pushButton_top_clicked(); break;
        case 14: _t->on_pushButton_clicked(); break;
        case 15: _t->Mynetted(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
