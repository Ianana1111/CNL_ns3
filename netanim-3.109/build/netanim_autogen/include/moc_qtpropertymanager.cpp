/****************************************************************************
** Meta object code from reading C++ file 'qtpropertymanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qtpropertybrowser/qtpropertymanager.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtpropertymanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN22QtGroupPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtGroupPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN22QtGroupPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtGroupPropertyManager"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtGroupPropertyManager, qt_meta_tag_ZN22QtGroupPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtGroupPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtGroupPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtGroupPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22QtGroupPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtGroupPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtGroupPropertyManager *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QtGroupPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGroupPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtGroupPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtGroupPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN20QtIntPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtIntPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN20QtIntPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtIntPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "rangeChanged",
        "minVal",
        "maxVal",
        "singleStepChanged",
        "step",
        "readOnlyChanged",
        "readOnly",
        "setValue",
        "setMinimum",
        "setMaximum",
        "setRange",
        "setSingleStep",
        "setReadOnly"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 5 },
        }}),
        // Signal 'rangeChanged'
        QtMocHelpers::SignalData<void(QtProperty *, int, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
        // Signal 'singleStepChanged'
        QtMocHelpers::SignalData<void(QtProperty *, int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 10 },
        }}),
        // Signal 'readOnlyChanged'
        QtMocHelpers::SignalData<void(QtProperty *, bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 12 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 5 },
        }}),
        // Slot 'setMinimum'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'setMaximum'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 8 },
        }}),
        // Slot 'setRange'
        QtMocHelpers::SlotData<void(QtProperty *, int, int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
        // Slot 'setSingleStep'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 10 },
        }}),
        // Slot 'setReadOnly'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtIntPropertyManager, qt_meta_tag_ZN20QtIntPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtIntPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QtIntPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QtIntPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20QtIntPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtIntPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtIntPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->singleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->readOnlyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->setMinimum((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->setMaximum((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->setRange((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 8: _t->setSingleStep((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->setReadOnly((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtIntPropertyManager::*)(QtProperty * , int )>(_a, &QtIntPropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtIntPropertyManager::*)(QtProperty * , int , int )>(_a, &QtIntPropertyManager::rangeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtIntPropertyManager::*)(QtProperty * , int )>(_a, &QtIntPropertyManager::singleStepChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtIntPropertyManager::*)(QtProperty * , bool )>(_a, &QtIntPropertyManager::readOnlyChanged, 3))
            return;
    }
}

const QMetaObject *QtIntPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtIntPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QtIntPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtIntPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QtIntPropertyManager::valueChanged(QtProperty * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtIntPropertyManager::rangeChanged(QtProperty * _t1, int _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void QtIntPropertyManager::singleStepChanged(QtProperty * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void QtIntPropertyManager::readOnlyChanged(QtProperty * _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN21QtBoolPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtBoolPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN21QtBoolPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtBoolPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "textVisibleChanged",
        "setValue",
        "setTextVisible",
        "textVisible"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 5 },
        }}),
        // Signal 'textVisibleChanged'
        QtMocHelpers::SignalData<void(QtProperty *, bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 5 },
        }}),
        // Slot 'setTextVisible'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtBoolPropertyManager, qt_meta_tag_ZN21QtBoolPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtBoolPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtBoolPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtBoolPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtBoolPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtBoolPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtBoolPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->textVisibleChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->setTextVisible((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtBoolPropertyManager::*)(QtProperty * , bool )>(_a, &QtBoolPropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtBoolPropertyManager::*)(QtProperty * , bool )>(_a, &QtBoolPropertyManager::textVisibleChanged, 1))
            return;
    }
}

const QMetaObject *QtBoolPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtBoolPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtBoolPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtBoolPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QtBoolPropertyManager::valueChanged(QtProperty * _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtBoolPropertyManager::textVisibleChanged(QtProperty * _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN23QtDoublePropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtDoublePropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN23QtDoublePropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtDoublePropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "rangeChanged",
        "minVal",
        "maxVal",
        "singleStepChanged",
        "step",
        "decimalsChanged",
        "prec",
        "readOnlyChanged",
        "readOnly",
        "setValue",
        "setMinimum",
        "setMaximum",
        "setRange",
        "setSingleStep",
        "setDecimals",
        "setReadOnly"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, double)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Double, 5 },
        }}),
        // Signal 'rangeChanged'
        QtMocHelpers::SignalData<void(QtProperty *, double, double)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Double, 7 }, { QMetaType::Double, 8 },
        }}),
        // Signal 'singleStepChanged'
        QtMocHelpers::SignalData<void(QtProperty *, double)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Double, 10 },
        }}),
        // Signal 'decimalsChanged'
        QtMocHelpers::SignalData<void(QtProperty *, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 12 },
        }}),
        // Signal 'readOnlyChanged'
        QtMocHelpers::SignalData<void(QtProperty *, bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 14 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Double, 5 },
        }}),
        // Slot 'setMinimum'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Double, 7 },
        }}),
        // Slot 'setMaximum'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Double, 8 },
        }}),
        // Slot 'setRange'
        QtMocHelpers::SlotData<void(QtProperty *, double, double)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Double, 7 }, { QMetaType::Double, 8 },
        }}),
        // Slot 'setSingleStep'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Double, 10 },
        }}),
        // Slot 'setDecimals'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 12 },
        }}),
        // Slot 'setReadOnly'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtDoublePropertyManager, qt_meta_tag_ZN23QtDoublePropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtDoublePropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtDoublePropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtDoublePropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23QtDoublePropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtDoublePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtDoublePropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 2: _t->singleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 3: _t->decimalsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->readOnlyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 6: _t->setMinimum((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 7: _t->setMaximum((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 8: _t->setRange((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 9: _t->setSingleStep((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 10: _t->setDecimals((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 11: _t->setReadOnly((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtDoublePropertyManager::*)(QtProperty * , double )>(_a, &QtDoublePropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtDoublePropertyManager::*)(QtProperty * , double , double )>(_a, &QtDoublePropertyManager::rangeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtDoublePropertyManager::*)(QtProperty * , double )>(_a, &QtDoublePropertyManager::singleStepChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtDoublePropertyManager::*)(QtProperty * , int )>(_a, &QtDoublePropertyManager::decimalsChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtDoublePropertyManager::*)(QtProperty * , bool )>(_a, &QtDoublePropertyManager::readOnlyChanged, 4))
            return;
    }
}

const QMetaObject *QtDoublePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDoublePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtDoublePropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtDoublePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QtDoublePropertyManager::valueChanged(QtProperty * _t1, double _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtDoublePropertyManager::rangeChanged(QtProperty * _t1, double _t2, double _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void QtDoublePropertyManager::singleStepChanged(QtProperty * _t1, double _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void QtDoublePropertyManager::decimalsChanged(QtProperty * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void QtDoublePropertyManager::readOnlyChanged(QtProperty * _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN23QtStringPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtStringPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN23QtStringPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtStringPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "regExpChanged",
        "regExp",
        "echoModeChanged",
        "readOnlyChanged",
        "setValue",
        "setRegExp",
        "setEchoMode",
        "EchoMode",
        "echoMode",
        "setReadOnly",
        "readOnly"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 5 },
        }}),
        // Signal 'regExpChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QRegularExpression &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QRegularExpression, 7 },
        }}),
        // Signal 'echoModeChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'readOnlyChanged'
        QtMocHelpers::SignalData<void(QtProperty *, bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 5 },
        }}),
        // Slot 'setRegExp'
        QtMocHelpers::SlotData<void(QtProperty *, const QRegularExpression &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QRegularExpression, 7 },
        }}),
        // Slot 'setEchoMode'
        QtMocHelpers::SlotData<void(QtProperty *, EchoMode)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 13, 14 },
        }}),
        // Slot 'setReadOnly'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 16 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtStringPropertyManager, qt_meta_tag_ZN23QtStringPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtStringPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtStringPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtStringPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23QtStringPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtStringPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtStringPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->regExpChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRegularExpression>>(_a[2]))); break;
        case 2: _t->echoModeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->readOnlyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->setRegExp((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRegularExpression>>(_a[2]))); break;
        case 6: _t->setEchoMode((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<EchoMode>>(_a[2]))); break;
        case 7: _t->setReadOnly((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtStringPropertyManager::*)(QtProperty * , const QString & )>(_a, &QtStringPropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtStringPropertyManager::*)(QtProperty * , const QRegularExpression & )>(_a, &QtStringPropertyManager::regExpChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtStringPropertyManager::*)(QtProperty * , const int )>(_a, &QtStringPropertyManager::echoModeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtStringPropertyManager::*)(QtProperty * , bool )>(_a, &QtStringPropertyManager::readOnlyChanged, 3))
            return;
    }
}

const QMetaObject *QtStringPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtStringPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtStringPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtStringPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QtStringPropertyManager::valueChanged(QtProperty * _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtStringPropertyManager::regExpChanged(QtProperty * _t1, const QRegularExpression & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void QtStringPropertyManager::echoModeChanged(QtProperty * _t1, const int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void QtStringPropertyManager::readOnlyChanged(QtProperty * _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN21QtDatePropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtDatePropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN21QtDatePropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtDatePropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "rangeChanged",
        "minVal",
        "maxVal",
        "setValue",
        "setMinimum",
        "setMaximum",
        "setRange"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QDate &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QDate, 5 },
        }}),
        // Signal 'rangeChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QDate &, const QDate &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QDate, 7 }, { QMetaType::QDate, 8 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QDate &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QDate, 5 },
        }}),
        // Slot 'setMinimum'
        QtMocHelpers::SlotData<void(QtProperty *, const QDate &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QDate, 7 },
        }}),
        // Slot 'setMaximum'
        QtMocHelpers::SlotData<void(QtProperty *, const QDate &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QDate, 8 },
        }}),
        // Slot 'setRange'
        QtMocHelpers::SlotData<void(QtProperty *, const QDate &, const QDate &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QDate, 7 }, { QMetaType::QDate, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtDatePropertyManager, qt_meta_tag_ZN21QtDatePropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtDatePropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtDatePropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtDatePropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtDatePropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtDatePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtDatePropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[3]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2]))); break;
        case 3: _t->setMinimum((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2]))); break;
        case 4: _t->setMaximum((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2]))); break;
        case 5: _t->setRange((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtDatePropertyManager::*)(QtProperty * , const QDate & )>(_a, &QtDatePropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtDatePropertyManager::*)(QtProperty * , const QDate & , const QDate & )>(_a, &QtDatePropertyManager::rangeChanged, 1))
            return;
    }
}

const QMetaObject *QtDatePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDatePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtDatePropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtDatePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QtDatePropertyManager::valueChanged(QtProperty * _t1, const QDate & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtDatePropertyManager::rangeChanged(QtProperty * _t1, const QDate & _t2, const QDate & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}
namespace {
struct qt_meta_tag_ZN21QtTimePropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtTimePropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN21QtTimePropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtTimePropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "setValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QTime &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QTime, 5 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QTime &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QTime, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtTimePropertyManager, qt_meta_tag_ZN21QtTimePropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtTimePropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtTimePropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtTimePropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtTimePropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtTimePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtTimePropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTime>>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTime>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtTimePropertyManager::*)(QtProperty * , const QTime & )>(_a, &QtTimePropertyManager::valueChanged, 0))
            return;
    }
}

const QMetaObject *QtTimePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTimePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtTimePropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtTimePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QtTimePropertyManager::valueChanged(QtProperty * _t1, const QTime & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN25QtDateTimePropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtDateTimePropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN25QtDateTimePropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtDateTimePropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "setValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QDateTime &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QDateTime, 5 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QDateTime &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QDateTime, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtDateTimePropertyManager, qt_meta_tag_ZN25QtDateTimePropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtDateTimePropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QtDateTimePropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QtDateTimePropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25QtDateTimePropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtDateTimePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtDateTimePropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtDateTimePropertyManager::*)(QtProperty * , const QDateTime & )>(_a, &QtDateTimePropertyManager::valueChanged, 0))
            return;
    }
}

const QMetaObject *QtDateTimePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDateTimePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QtDateTimePropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtDateTimePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QtDateTimePropertyManager::valueChanged(QtProperty * _t1, const QDateTime & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN28QtKeySequencePropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtKeySequencePropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN28QtKeySequencePropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtKeySequencePropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "QKeySequence",
        "val",
        "setValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QKeySequence &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QKeySequence &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtKeySequencePropertyManager, qt_meta_tag_ZN28QtKeySequencePropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtKeySequencePropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28QtKeySequencePropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28QtKeySequencePropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN28QtKeySequencePropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtKeySequencePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtKeySequencePropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtKeySequencePropertyManager::*)(QtProperty * , const QKeySequence & )>(_a, &QtKeySequencePropertyManager::valueChanged, 0))
            return;
    }
}

const QMetaObject *QtKeySequencePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtKeySequencePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28QtKeySequencePropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtKeySequencePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QtKeySequencePropertyManager::valueChanged(QtProperty * _t1, const QKeySequence & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN21QtCharPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtCharPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN21QtCharPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtCharPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "setValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QChar &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QChar, 5 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QChar &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QChar, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtCharPropertyManager, qt_meta_tag_ZN21QtCharPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtCharPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtCharPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtCharPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtCharPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtCharPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtCharPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtCharPropertyManager::*)(QtProperty * , const QChar & )>(_a, &QtCharPropertyManager::valueChanged, 0))
            return;
    }
}

const QMetaObject *QtCharPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtCharPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtCharPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QtCharPropertyManager::valueChanged(QtProperty * _t1, const QChar & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN23QtLocalePropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtLocalePropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN23QtLocalePropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtLocalePropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "setValue",
        "slotEnumChanged",
        "slotPropertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QLocale &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QLocale, 5 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QLocale &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QLocale, 5 },
        }}),
        // Slot 'slotEnumChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtLocalePropertyManager, qt_meta_tag_ZN23QtLocalePropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtLocalePropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtLocalePropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtLocalePropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23QtLocalePropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtLocalePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtLocalePropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLocale>>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLocale>>(_a[2]))); break;
        case 2: _t->d_func()->slotEnumChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtLocalePropertyManager::*)(QtProperty * , const QLocale & )>(_a, &QtLocalePropertyManager::valueChanged, 0))
            return;
    }
}

const QMetaObject *QtLocalePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLocalePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtLocalePropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtLocalePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QtLocalePropertyManager::valueChanged(QtProperty * _t1, const QLocale & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN22QtPointPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtPointPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN22QtPointPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtPointPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "setValue",
        "slotIntChanged",
        "slotPropertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QPoint &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QPoint, 5 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QPoint &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QPoint, 5 },
        }}),
        // Slot 'slotIntChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtPointPropertyManager, qt_meta_tag_ZN22QtPointPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtPointPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtPointPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtPointPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22QtPointPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtPointPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtPointPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 2: _t->d_func()->slotIntChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtPointPropertyManager::*)(QtProperty * , const QPoint & )>(_a, &QtPointPropertyManager::valueChanged, 0))
            return;
    }
}

const QMetaObject *QtPointPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtPointPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtPointPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtPointPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QtPointPropertyManager::valueChanged(QtProperty * _t1, const QPoint & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN23QtPointFPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtPointFPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN23QtPointFPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtPointFPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "decimalsChanged",
        "prec",
        "setValue",
        "setDecimals",
        "slotDoubleChanged",
        "slotPropertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QPointF &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QPointF, 5 },
        }}),
        // Signal 'decimalsChanged'
        QtMocHelpers::SignalData<void(QtProperty *, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QPointF &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QPointF, 5 },
        }}),
        // Slot 'setDecimals'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'slotDoubleChanged'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Double, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtPointFPropertyManager, qt_meta_tag_ZN23QtPointFPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtPointFPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtPointFPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtPointFPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23QtPointFPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtPointFPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtPointFPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 1: _t->decimalsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 3: _t->setDecimals((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->d_func()->slotDoubleChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 5: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtPointFPropertyManager::*)(QtProperty * , const QPointF & )>(_a, &QtPointFPropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtPointFPropertyManager::*)(QtProperty * , int )>(_a, &QtPointFPropertyManager::decimalsChanged, 1))
            return;
    }
}

const QMetaObject *QtPointFPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtPointFPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtPointFPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtPointFPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QtPointFPropertyManager::valueChanged(QtProperty * _t1, const QPointF & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtPointFPropertyManager::decimalsChanged(QtProperty * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN21QtSizePropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtSizePropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN21QtSizePropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtSizePropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "rangeChanged",
        "minVal",
        "maxVal",
        "setValue",
        "setMinimum",
        "setMaximum",
        "setRange",
        "slotIntChanged",
        "slotPropertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QSize &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSize, 5 },
        }}),
        // Signal 'rangeChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QSize &, const QSize &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSize, 7 }, { QMetaType::QSize, 8 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QSize &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSize, 5 },
        }}),
        // Slot 'setMinimum'
        QtMocHelpers::SlotData<void(QtProperty *, const QSize &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSize, 7 },
        }}),
        // Slot 'setMaximum'
        QtMocHelpers::SlotData<void(QtProperty *, const QSize &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSize, 8 },
        }}),
        // Slot 'setRange'
        QtMocHelpers::SlotData<void(QtProperty *, const QSize &, const QSize &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSize, 7 }, { QMetaType::QSize, 8 },
        }}),
        // Slot 'slotIntChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtSizePropertyManager, qt_meta_tag_ZN21QtSizePropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtSizePropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtSizePropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtSizePropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtSizePropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtSizePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtSizePropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[3]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2]))); break;
        case 3: _t->setMinimum((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2]))); break;
        case 4: _t->setMaximum((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2]))); break;
        case 5: _t->setRange((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[3]))); break;
        case 6: _t->d_func()->slotIntChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtSizePropertyManager::*)(QtProperty * , const QSize & )>(_a, &QtSizePropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtSizePropertyManager::*)(QtProperty * , const QSize & , const QSize & )>(_a, &QtSizePropertyManager::rangeChanged, 1))
            return;
    }
}

const QMetaObject *QtSizePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSizePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtSizePropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtSizePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QtSizePropertyManager::valueChanged(QtProperty * _t1, const QSize & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtSizePropertyManager::rangeChanged(QtProperty * _t1, const QSize & _t2, const QSize & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}
namespace {
struct qt_meta_tag_ZN22QtSizeFPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtSizeFPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN22QtSizeFPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtSizeFPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "rangeChanged",
        "minVal",
        "maxVal",
        "decimalsChanged",
        "prec",
        "setValue",
        "setMinimum",
        "setMaximum",
        "setRange",
        "setDecimals",
        "slotDoubleChanged",
        "slotPropertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QSizeF &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSizeF, 5 },
        }}),
        // Signal 'rangeChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QSizeF &, const QSizeF &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSizeF, 7 }, { QMetaType::QSizeF, 8 },
        }}),
        // Signal 'decimalsChanged'
        QtMocHelpers::SignalData<void(QtProperty *, int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 10 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QSizeF &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSizeF, 5 },
        }}),
        // Slot 'setMinimum'
        QtMocHelpers::SlotData<void(QtProperty *, const QSizeF &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSizeF, 7 },
        }}),
        // Slot 'setMaximum'
        QtMocHelpers::SlotData<void(QtProperty *, const QSizeF &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSizeF, 8 },
        }}),
        // Slot 'setRange'
        QtMocHelpers::SlotData<void(QtProperty *, const QSizeF &, const QSizeF &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSizeF, 7 }, { QMetaType::QSizeF, 8 },
        }}),
        // Slot 'setDecimals'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 10 },
        }}),
        // Slot 'slotDoubleChanged'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Double, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtSizeFPropertyManager, qt_meta_tag_ZN22QtSizeFPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtSizeFPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtSizeFPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtSizeFPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22QtSizeFPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtSizeFPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtSizeFPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[2]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[3]))); break;
        case 2: _t->decimalsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[2]))); break;
        case 4: _t->setMinimum((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[2]))); break;
        case 5: _t->setMaximum((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[2]))); break;
        case 6: _t->setRange((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[3]))); break;
        case 7: _t->setDecimals((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->d_func()->slotDoubleChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 9: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtSizeFPropertyManager::*)(QtProperty * , const QSizeF & )>(_a, &QtSizeFPropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtSizeFPropertyManager::*)(QtProperty * , const QSizeF & , const QSizeF & )>(_a, &QtSizeFPropertyManager::rangeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtSizeFPropertyManager::*)(QtProperty * , int )>(_a, &QtSizeFPropertyManager::decimalsChanged, 2))
            return;
    }
}

const QMetaObject *QtSizeFPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSizeFPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtSizeFPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtSizeFPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QtSizeFPropertyManager::valueChanged(QtProperty * _t1, const QSizeF & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtSizeFPropertyManager::rangeChanged(QtProperty * _t1, const QSizeF & _t2, const QSizeF & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void QtSizeFPropertyManager::decimalsChanged(QtProperty * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN21QtRectPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtRectPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN21QtRectPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtRectPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "constraintChanged",
        "constraint",
        "setValue",
        "setConstraint",
        "slotIntChanged",
        "slotPropertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QRect &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QRect, 5 },
        }}),
        // Signal 'constraintChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QRect &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QRect, 7 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QRect &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QRect, 5 },
        }}),
        // Slot 'setConstraint'
        QtMocHelpers::SlotData<void(QtProperty *, const QRect &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QRect, 7 },
        }}),
        // Slot 'slotIntChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtRectPropertyManager, qt_meta_tag_ZN21QtRectPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtRectPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtRectPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtRectPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtRectPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtRectPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtRectPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRect>>(_a[2]))); break;
        case 1: _t->constraintChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRect>>(_a[2]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRect>>(_a[2]))); break;
        case 3: _t->setConstraint((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRect>>(_a[2]))); break;
        case 4: _t->d_func()->slotIntChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtRectPropertyManager::*)(QtProperty * , const QRect & )>(_a, &QtRectPropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtRectPropertyManager::*)(QtProperty * , const QRect & )>(_a, &QtRectPropertyManager::constraintChanged, 1))
            return;
    }
}

const QMetaObject *QtRectPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtRectPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtRectPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtRectPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QtRectPropertyManager::valueChanged(QtProperty * _t1, const QRect & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtRectPropertyManager::constraintChanged(QtProperty * _t1, const QRect & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN22QtRectFPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtRectFPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN22QtRectFPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtRectFPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "constraintChanged",
        "constraint",
        "decimalsChanged",
        "prec",
        "setValue",
        "setConstraint",
        "setDecimals",
        "slotDoubleChanged",
        "slotPropertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QRectF &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QRectF, 5 },
        }}),
        // Signal 'constraintChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QRectF &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QRectF, 7 },
        }}),
        // Signal 'decimalsChanged'
        QtMocHelpers::SignalData<void(QtProperty *, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 9 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QRectF &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QRectF, 5 },
        }}),
        // Slot 'setConstraint'
        QtMocHelpers::SlotData<void(QtProperty *, const QRectF &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QRectF, 7 },
        }}),
        // Slot 'setDecimals'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 9 },
        }}),
        // Slot 'slotDoubleChanged'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Double, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtRectFPropertyManager, qt_meta_tag_ZN22QtRectFPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtRectFPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtRectFPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtRectFPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22QtRectFPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtRectFPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtRectFPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[2]))); break;
        case 1: _t->constraintChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[2]))); break;
        case 2: _t->decimalsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[2]))); break;
        case 4: _t->setConstraint((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[2]))); break;
        case 5: _t->setDecimals((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->d_func()->slotDoubleChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 7: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtRectFPropertyManager::*)(QtProperty * , const QRectF & )>(_a, &QtRectFPropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtRectFPropertyManager::*)(QtProperty * , const QRectF & )>(_a, &QtRectFPropertyManager::constraintChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtRectFPropertyManager::*)(QtProperty * , int )>(_a, &QtRectFPropertyManager::decimalsChanged, 2))
            return;
    }
}

const QMetaObject *QtRectFPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtRectFPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtRectFPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtRectFPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QtRectFPropertyManager::valueChanged(QtProperty * _t1, const QRectF & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtRectFPropertyManager::constraintChanged(QtProperty * _t1, const QRectF & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void QtRectFPropertyManager::decimalsChanged(QtProperty * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN21QtEnumPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtEnumPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN21QtEnumPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtEnumPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "enumNamesChanged",
        "names",
        "enumIconsChanged",
        "QMap<int,QIcon>",
        "icons",
        "setValue",
        "setEnumNames",
        "setEnumIcons"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 5 },
        }}),
        // Signal 'enumNamesChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QStringList &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QStringList, 7 },
        }}),
        // Signal 'enumIconsChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QMap<int,QIcon> &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 5 },
        }}),
        // Slot 'setEnumNames'
        QtMocHelpers::SlotData<void(QtProperty *, const QStringList &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QStringList, 7 },
        }}),
        // Slot 'setEnumIcons'
        QtMocHelpers::SlotData<void(QtProperty *, const QMap<int,QIcon> &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 9, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtEnumPropertyManager, qt_meta_tag_ZN21QtEnumPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtEnumPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtEnumPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtEnumPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtEnumPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtEnumPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtEnumPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->enumNamesChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 2: _t->enumIconsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<int,QIcon>>>(_a[2]))); break;
        case 3: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->setEnumNames((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 5: _t->setEnumIcons((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<int,QIcon>>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtEnumPropertyManager::*)(QtProperty * , int )>(_a, &QtEnumPropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtEnumPropertyManager::*)(QtProperty * , const QStringList & )>(_a, &QtEnumPropertyManager::enumNamesChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtEnumPropertyManager::*)(QtProperty * , const QMap<int,QIcon> & )>(_a, &QtEnumPropertyManager::enumIconsChanged, 2))
            return;
    }
}

const QMetaObject *QtEnumPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtEnumPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtEnumPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtEnumPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QtEnumPropertyManager::valueChanged(QtProperty * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtEnumPropertyManager::enumNamesChanged(QtProperty * _t1, const QStringList & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void QtEnumPropertyManager::enumIconsChanged(QtProperty * _t1, const QMap<int,QIcon> & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN21QtFlagPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtFlagPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN21QtFlagPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtFlagPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "flagNamesChanged",
        "names",
        "setValue",
        "setFlagNames",
        "slotBoolChanged",
        "slotPropertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 5 },
        }}),
        // Signal 'flagNamesChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QStringList &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QStringList, 7 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 5 },
        }}),
        // Slot 'setFlagNames'
        QtMocHelpers::SlotData<void(QtProperty *, const QStringList &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QStringList, 7 },
        }}),
        // Slot 'slotBoolChanged'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtFlagPropertyManager, qt_meta_tag_ZN21QtFlagPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtFlagPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtFlagPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtFlagPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtFlagPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtFlagPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtFlagPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->flagNamesChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->setFlagNames((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 4: _t->d_func()->slotBoolChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtFlagPropertyManager::*)(QtProperty * , int )>(_a, &QtFlagPropertyManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtFlagPropertyManager::*)(QtProperty * , const QStringList & )>(_a, &QtFlagPropertyManager::flagNamesChanged, 1))
            return;
    }
}

const QMetaObject *QtFlagPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtFlagPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtFlagPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtFlagPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QtFlagPropertyManager::valueChanged(QtProperty * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtFlagPropertyManager::flagNamesChanged(QtProperty * _t1, const QStringList & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN27QtSizePolicyPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtSizePolicyPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN27QtSizePolicyPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtSizePolicyPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "setValue",
        "slotIntChanged",
        "slotEnumChanged",
        "slotPropertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QSizePolicy &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSizePolicy, 5 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QSizePolicy &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QSizePolicy, 5 },
        }}),
        // Slot 'slotIntChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotEnumChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtSizePolicyPropertyManager, qt_meta_tag_ZN27QtSizePolicyPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtSizePolicyPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27QtSizePolicyPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27QtSizePolicyPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN27QtSizePolicyPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtSizePolicyPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtSizePolicyPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizePolicy>>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizePolicy>>(_a[2]))); break;
        case 2: _t->d_func()->slotIntChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotEnumChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtSizePolicyPropertyManager::*)(QtProperty * , const QSizePolicy & )>(_a, &QtSizePolicyPropertyManager::valueChanged, 0))
            return;
    }
}

const QMetaObject *QtSizePolicyPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSizePolicyPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27QtSizePolicyPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtSizePolicyPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QtSizePolicyPropertyManager::valueChanged(QtProperty * _t1, const QSizePolicy & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN21QtFontPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtFontPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN21QtFontPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtFontPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "setValue",
        "slotIntChanged",
        "slotEnumChanged",
        "slotBoolChanged",
        "slotPropertyDestroyed",
        "slotFontDatabaseChanged",
        "slotFontDatabaseDelayedChange"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QFont &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QFont, 5 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QFont &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QFont, 5 },
        }}),
        // Slot 'slotIntChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotEnumChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotBoolChanged'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'slotFontDatabaseChanged'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotFontDatabaseDelayedChange'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtFontPropertyManager, qt_meta_tag_ZN21QtFontPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtFontPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtFontPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtFontPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtFontPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtFontPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtFontPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFont>>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFont>>(_a[2]))); break;
        case 2: _t->d_func()->slotIntChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotEnumChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->d_func()->slotBoolChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        case 6: _t->d_func()->slotFontDatabaseChanged(); break;
        case 7: _t->d_func()->slotFontDatabaseDelayedChange(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtFontPropertyManager::*)(QtProperty * , const QFont & )>(_a, &QtFontPropertyManager::valueChanged, 0))
            return;
    }
}

const QMetaObject *QtFontPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtFontPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtFontPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtFontPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QtFontPropertyManager::valueChanged(QtProperty * _t1, const QFont & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN22QtColorPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtColorPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN22QtColorPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtColorPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "setValue",
        "slotIntChanged",
        "slotPropertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QColor &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QColor, 5 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QColor &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QColor, 5 },
        }}),
        // Slot 'slotIntChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtColorPropertyManager, qt_meta_tag_ZN22QtColorPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtColorPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtColorPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtColorPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22QtColorPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtColorPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtColorPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 2: _t->d_func()->slotIntChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtColorPropertyManager::*)(QtProperty * , const QColor & )>(_a, &QtColorPropertyManager::valueChanged, 0))
            return;
    }
}

const QMetaObject *QtColorPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtColorPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtColorPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtColorPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QtColorPropertyManager::valueChanged(QtProperty * _t1, const QColor & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN23QtCursorPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtCursorPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN23QtCursorPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtCursorPropertyManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "setValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QCursor &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QCursor, 5 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QCursor &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QCursor, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtCursorPropertyManager, qt_meta_tag_ZN23QtCursorPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtCursorPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtCursorPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtCursorPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23QtCursorPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtCursorPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtCursorPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCursor>>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCursor>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtCursorPropertyManager::*)(QtProperty * , const QCursor & )>(_a, &QtCursorPropertyManager::valueChanged, 0))
            return;
    }
}

const QMetaObject *QtCursorPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCursorPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtCursorPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int QtCursorPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QtCursorPropertyManager::valueChanged(QtProperty * _t1, const QCursor & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
