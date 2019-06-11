/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/forms/rpcconsole_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RPCConsole_Widget_t {
    QByteArrayData data[15];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RPCConsole_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RPCConsole_Widget_t qt_meta_stringdata_RPCConsole_Widget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "RPCConsole_Widget"
QT_MOC_LITERAL(1, 18, 12), // "stopExecutor"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "cmdRequest"
QT_MOC_LITERAL(4, 43, 7), // "command"
QT_MOC_LITERAL(5, 51, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(6, 77, 33), // "on_openDebugLogfileButton_cli..."
QT_MOC_LITERAL(7, 111, 30), // "on_showCLOptionsButton_clicked"
QT_MOC_LITERAL(8, 142, 5), // "clear"
QT_MOC_LITERAL(9, 148, 7), // "message"
QT_MOC_LITERAL(10, 156, 8), // "category"
QT_MOC_LITERAL(11, 165, 4), // "html"
QT_MOC_LITERAL(12, 170, 13), // "browseHistory"
QT_MOC_LITERAL(13, 184, 6), // "offset"
QT_MOC_LITERAL(14, 191, 11) // "scrollToEnd"

    },
    "RPCConsole_Widget\0stopExecutor\0\0"
    "cmdRequest\0command\0on_lineEdit_returnPressed\0"
    "on_openDebugLogfileButton_clicked\0"
    "on_showCLOptionsButton_clicked\0clear\0"
    "message\0category\0html\0browseHistory\0"
    "offset\0scrollToEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPCConsole_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    3,   72,    2, 0x0a /* Public */,
       9,    2,   79,    2, 0x2a /* Public | MethodCloned */,
      12,    1,   84,    2, 0x0a /* Public */,
      14,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   10,    9,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,    9,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void RPCConsole_Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RPCConsole_Widget *_t = static_cast<RPCConsole_Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_returnPressed(); break;
        case 3: _t->on_openDebugLogfileButton_clicked(); break;
        case 4: _t->on_showCLOptionsButton_clicked(); break;
        case 5: _t->clear(); break;
        case 6: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->scrollToEnd(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RPCConsole_Widget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole_Widget::stopExecutor)) {
                *result = 0;
            }
        }
        {
            typedef void (RPCConsole_Widget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole_Widget::cmdRequest)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject RPCConsole_Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RPCConsole_Widget.data,
      qt_meta_data_RPCConsole_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RPCConsole_Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPCConsole_Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RPCConsole_Widget.stringdata0))
        return static_cast<void*>(const_cast< RPCConsole_Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RPCConsole_Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void RPCConsole_Widget::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RPCConsole_Widget::cmdRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
