/****************************************************************************
** Meta object code from reading C++ file 'sensor_sen0104.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../STEMe/vsensors/sensor_sen0104.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sensor_sen0104.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sensor_SEN0104_t {
    QByteArrayData data[16];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sensor_SEN0104_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sensor_SEN0104_t qt_meta_stringdata_Sensor_SEN0104 = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Sensor_SEN0104"
QT_MOC_LITERAL(1, 15, 15), // "on_displayTimer"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "on_setChartParameter"
QT_MOC_LITERAL(4, 53, 10), // "sampleTime"
QT_MOC_LITERAL(5, 64, 42), // "on_comboBox_Value_Unit_curren..."
QT_MOC_LITERAL(6, 107, 5), // "index"
QT_MOC_LITERAL(7, 113, 32), // "on_pushButton_getSamples_clicked"
QT_MOC_LITERAL(8, 146, 31), // "on_pushButton_ChartZoom_clicked"
QT_MOC_LITERAL(9, 178, 26), // "on_pushButton_Exit_clicked"
QT_MOC_LITERAL(10, 205, 34), // "on_spinBox_SampleTime_valueCh..."
QT_MOC_LITERAL(11, 240, 4), // "arg1"
QT_MOC_LITERAL(12, 245, 35), // "on_pushButton_SetSampleTime_c..."
QT_MOC_LITERAL(13, 281, 27), // "on_pushButton_Calib_clicked"
QT_MOC_LITERAL(14, 309, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(15, 336, 29) // "on_pushButton_SetZero_clicked"

    },
    "Sensor_SEN0104\0on_displayTimer\0\0"
    "on_setChartParameter\0sampleTime\0"
    "on_comboBox_Value_Unit_currentIndexChanged\0"
    "index\0on_pushButton_getSamples_clicked\0"
    "on_pushButton_ChartZoom_clicked\0"
    "on_pushButton_Exit_clicked\0"
    "on_spinBox_SampleTime_valueChanged\0"
    "arg1\0on_pushButton_SetSampleTime_clicked\0"
    "on_pushButton_Calib_clicked\0"
    "on_tabWidget_tabBarClicked\0"
    "on_pushButton_SetZero_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sensor_SEN0104[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       5,    1,   73,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void Sensor_SEN0104::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Sensor_SEN0104 *_t = static_cast<Sensor_SEN0104 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_displayTimer(); break;
        case 1: _t->on_setChartParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_Value_Unit_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_getSamples_clicked(); break;
        case 4: _t->on_pushButton_ChartZoom_clicked(); break;
        case 5: _t->on_pushButton_Exit_clicked(); break;
        case 6: _t->on_spinBox_SampleTime_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_SetSampleTime_clicked(); break;
        case 8: _t->on_pushButton_Calib_clicked(); break;
        case 9: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_SetZero_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Sensor_SEN0104::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Sensor_SEN0104.data,
      qt_meta_data_Sensor_SEN0104,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Sensor_SEN0104::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sensor_SEN0104::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sensor_SEN0104.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Sensor_SEN0104::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
