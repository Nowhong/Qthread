/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mythread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Generate_t {
    QByteArrayData data[6];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Generate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Generate_t qt_meta_stringdata_Generate = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Generate"
QT_MOC_LITERAL(1, 9, 9), // "sendArray"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "QVector<int>"
QT_MOC_LITERAL(4, 33, 4), // "list"
QT_MOC_LITERAL(5, 38, 9) // "spendTime"

    },
    "Generate\0sendArray\0\0QVector<int>\0list\0"
    "spendTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Generate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Generate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Generate *_t = static_cast<Generate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendArray((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 1: _t->spendTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Generate::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Generate::sendArray)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Generate::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Generate::spendTime)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Generate::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Generate.data,
      qt_meta_data_Generate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Generate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Generate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Generate.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Generate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Generate::sendArray(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Generate::spendTime(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_BubbleSort_t {
    QByteArrayData data[6];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BubbleSort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BubbleSort_t qt_meta_stringdata_BubbleSort = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BubbleSort"
QT_MOC_LITERAL(1, 11, 6), // "finish"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "QVector<int>"
QT_MOC_LITERAL(4, 32, 3), // "num"
QT_MOC_LITERAL(5, 36, 9) // "spendTime"

    },
    "BubbleSort\0finish\0\0QVector<int>\0num\0"
    "spendTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BubbleSort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void BubbleSort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BubbleSort *_t = static_cast<BubbleSort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finish((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 1: _t->spendTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BubbleSort::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BubbleSort::finish)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BubbleSort::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BubbleSort::spendTime)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BubbleSort::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_BubbleSort.data,
      qt_meta_data_BubbleSort,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BubbleSort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BubbleSort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BubbleSort.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int BubbleSort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BubbleSort::finish(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BubbleSort::spendTime(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QuickSort_t {
    QByteArrayData data[6];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickSort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickSort_t qt_meta_stringdata_QuickSort = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QuickSort"
QT_MOC_LITERAL(1, 10, 6), // "finish"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 12), // "QVector<int>"
QT_MOC_LITERAL(4, 31, 3), // "num"
QT_MOC_LITERAL(5, 35, 9) // "spendTime"

    },
    "QuickSort\0finish\0\0QVector<int>\0num\0"
    "spendTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickSort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void QuickSort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuickSort *_t = static_cast<QuickSort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finish((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 1: _t->spendTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QuickSort::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickSort::finish)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QuickSort::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickSort::spendTime)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QuickSort::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QuickSort.data,
      qt_meta_data_QuickSort,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QuickSort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickSort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QuickSort.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QuickSort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QuickSort::finish(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QuickSort::spendTime(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
