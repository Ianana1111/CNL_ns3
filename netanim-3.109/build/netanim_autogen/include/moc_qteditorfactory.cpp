/****************************************************************************
** Meta object code from reading C++ file 'qteditorfactory.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qtpropertybrowser/qteditorfactory.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qteditorfactory.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16QtSpinBoxFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtSpinBoxFactory::qt_create_metaobjectdata<qt_meta_tag_ZN16QtSpinBoxFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtSpinBoxFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotRangeChanged",
        "slotSingleStepChanged",
        "slotReadOnlyChanged",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotRangeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int, int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotSingleStepChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotReadOnlyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtSpinBoxFactory, qt_meta_tag_ZN16QtSpinBoxFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtSpinBoxFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtIntPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QtSpinBoxFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QtSpinBoxFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16QtSpinBoxFactoryE_t>.metaTypes,
    nullptr
} };

void QtSpinBoxFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtSpinBoxFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotReadOnlyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtSpinBoxFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSpinBoxFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QtSpinBoxFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacast(_clname);
}

int QtSpinBoxFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN15QtSliderFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtSliderFactory::qt_create_metaobjectdata<qt_meta_tag_ZN15QtSliderFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtSliderFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotRangeChanged",
        "slotSingleStepChanged",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotRangeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int, int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotSingleStepChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtSliderFactory, qt_meta_tag_ZN15QtSliderFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtSliderFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtIntPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QtSliderFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QtSliderFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15QtSliderFactoryE_t>.metaTypes,
    nullptr
} };

void QtSliderFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtSliderFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtSliderFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSliderFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QtSliderFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacast(_clname);
}

int QtSliderFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN18QtScrollBarFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtScrollBarFactory::qt_create_metaobjectdata<qt_meta_tag_ZN18QtScrollBarFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtScrollBarFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotRangeChanged",
        "slotSingleStepChanged",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotRangeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int, int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotSingleStepChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtScrollBarFactory, qt_meta_tag_ZN18QtScrollBarFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtScrollBarFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtIntPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QtScrollBarFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QtScrollBarFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18QtScrollBarFactoryE_t>.metaTypes,
    nullptr
} };

void QtScrollBarFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtScrollBarFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtScrollBarFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtScrollBarFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QtScrollBarFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacast(_clname);
}

int QtScrollBarFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN17QtCheckBoxFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtCheckBoxFactory::qt_create_metaobjectdata<qt_meta_tag_ZN17QtCheckBoxFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtCheckBoxFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotTextVisibleChanged",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotTextVisibleChanged'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtCheckBoxFactory, qt_meta_tag_ZN17QtCheckBoxFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtCheckBoxFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtBoolPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtCheckBoxFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtCheckBoxFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17QtCheckBoxFactoryE_t>.metaTypes,
    nullptr
} };

void QtCheckBoxFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtCheckBoxFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->d_func()->slotTextVisibleChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtCheckBoxFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCheckBoxFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtCheckBoxFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtBoolPropertyManager>::qt_metacast(_clname);
}

int QtCheckBoxFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtBoolPropertyManager>::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN22QtDoubleSpinBoxFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtDoubleSpinBoxFactory::qt_create_metaobjectdata<qt_meta_tag_ZN22QtDoubleSpinBoxFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtDoubleSpinBoxFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotRangeChanged",
        "slotSingleStepChanged",
        "slotDecimalsChanged",
        "slotReadOnlyChanged",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Double, 2 },
        }}),
        // Slot 'slotRangeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, double, double)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Double, 2 }, { QMetaType::Double, 2 },
        }}),
        // Slot 'slotSingleStepChanged'
        QtMocHelpers::SlotData<void(QtProperty *, double)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Double, 2 },
        }}),
        // Slot 'slotDecimalsChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotReadOnlyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(double)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtDoubleSpinBoxFactory, qt_meta_tag_ZN22QtDoubleSpinBoxFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtDoubleSpinBoxFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtDoublePropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtDoubleSpinBoxFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtDoubleSpinBoxFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22QtDoubleSpinBoxFactoryE_t>.metaTypes,
    nullptr
} };

void QtDoubleSpinBoxFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtDoubleSpinBoxFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 3: _t->d_func()->slotDecimalsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->d_func()->slotReadOnlyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtDoubleSpinBoxFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDoubleSpinBoxFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22QtDoubleSpinBoxFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtDoublePropertyManager>::qt_metacast(_clname);
}

int QtDoubleSpinBoxFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtDoublePropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN17QtLineEditFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtLineEditFactory::qt_create_metaobjectdata<qt_meta_tag_ZN17QtLineEditFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtLineEditFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotRegExpChanged",
        "slotEchoModeChanged",
        "slotReadOnlyChanged",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QString &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QString, 2 },
        }}),
        // Slot 'slotRegExpChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QRegularExpression &)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QRegularExpression, 2 },
        }}),
        // Slot 'slotEchoModeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotReadOnlyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, bool)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(const QString &)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtLineEditFactory, qt_meta_tag_ZN17QtLineEditFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtLineEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtStringPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtLineEditFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtLineEditFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17QtLineEditFactoryE_t>.metaTypes,
    nullptr
} };

void QtLineEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtLineEditFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->d_func()->slotRegExpChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRegularExpression>>(_a[2]))); break;
        case 2: _t->d_func()->slotEchoModeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotReadOnlyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtLineEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLineEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtLineEditFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtStringPropertyManager>::qt_metacast(_clname);
}

int QtLineEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtStringPropertyManager>::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN17QtDateEditFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtDateEditFactory::qt_create_metaobjectdata<qt_meta_tag_ZN17QtDateEditFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtDateEditFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotRangeChanged",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QDate &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QDate, 2 },
        }}),
        // Slot 'slotRangeChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QDate &, const QDate &)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QDate, 2 }, { QMetaType::QDate, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(const QDate &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QDate, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtDateEditFactory, qt_meta_tag_ZN17QtDateEditFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtDateEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtDatePropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtDateEditFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtDateEditFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17QtDateEditFactoryE_t>.metaTypes,
    nullptr
} };

void QtDateEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtDateEditFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[3]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 3: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtDateEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDateEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtDateEditFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtDatePropertyManager>::qt_metacast(_clname);
}

int QtDateEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtDatePropertyManager>::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN17QtTimeEditFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtTimeEditFactory::qt_create_metaobjectdata<qt_meta_tag_ZN17QtTimeEditFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtTimeEditFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QTime &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QTime, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(const QTime &)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QTime, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtTimeEditFactory, qt_meta_tag_ZN17QtTimeEditFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtTimeEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtTimePropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtTimeEditFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtTimeEditFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17QtTimeEditFactoryE_t>.metaTypes,
    nullptr
} };

void QtTimeEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtTimeEditFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTime>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtTimeEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTimeEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtTimeEditFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtTimePropertyManager>::qt_metacast(_clname);
}

int QtTimeEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtTimePropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN21QtDateTimeEditFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtDateTimeEditFactory::qt_create_metaobjectdata<qt_meta_tag_ZN21QtDateTimeEditFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtDateTimeEditFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QDateTime &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QDateTime, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(const QDateTime &)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QDateTime, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtDateTimeEditFactory, qt_meta_tag_ZN21QtDateTimeEditFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtDateTimeEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtDateTimePropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtDateTimeEditFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtDateTimeEditFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtDateTimeEditFactoryE_t>.metaTypes,
    nullptr
} };

void QtDateTimeEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtDateTimeEditFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtDateTimeEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDateTimeEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtDateTimeEditFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtDateTimePropertyManager>::qt_metacast(_clname);
}

int QtDateTimeEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtDateTimePropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN26QtKeySequenceEditorFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtKeySequenceEditorFactory::qt_create_metaobjectdata<qt_meta_tag_ZN26QtKeySequenceEditorFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtKeySequenceEditorFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "QKeySequence",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QKeySequence &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(const QKeySequence &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtKeySequenceEditorFactory, qt_meta_tag_ZN26QtKeySequenceEditorFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtKeySequenceEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtKeySequencePropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26QtKeySequenceEditorFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26QtKeySequenceEditorFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN26QtKeySequenceEditorFactoryE_t>.metaTypes,
    nullptr
} };

void QtKeySequenceEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtKeySequenceEditorFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtKeySequenceEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtKeySequenceEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26QtKeySequenceEditorFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtKeySequencePropertyManager>::qt_metacast(_clname);
}

int QtKeySequenceEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtKeySequencePropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN19QtCharEditorFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtCharEditorFactory::qt_create_metaobjectdata<qt_meta_tag_ZN19QtCharEditorFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtCharEditorFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QChar &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QChar, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(const QChar &)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QChar, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtCharEditorFactory, qt_meta_tag_ZN19QtCharEditorFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtCharEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtCharPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QtCharEditorFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QtCharEditorFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19QtCharEditorFactoryE_t>.metaTypes,
    nullptr
} };

void QtCharEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtCharEditorFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtCharEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QtCharEditorFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtCharPropertyManager>::qt_metacast(_clname);
}

int QtCharEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtCharPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN19QtEnumEditorFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtEnumEditorFactory::qt_create_metaobjectdata<qt_meta_tag_ZN19QtEnumEditorFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtEnumEditorFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotEnumNamesChanged",
        "slotEnumIconsChanged",
        "QMap<int,QIcon>",
        "slotSetValue",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotEnumNamesChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QStringList &)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QStringList, 2 },
        }}),
        // Slot 'slotEnumIconsChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QMap<int,QIcon> &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 6, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtEnumEditorFactory, qt_meta_tag_ZN19QtEnumEditorFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtEnumEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtEnumPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QtEnumEditorFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QtEnumEditorFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19QtEnumEditorFactoryE_t>.metaTypes,
    nullptr
} };

void QtEnumEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtEnumEditorFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotEnumNamesChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 2: _t->d_func()->slotEnumIconsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<int,QIcon>>>(_a[2]))); break;
        case 3: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtEnumEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtEnumEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QtEnumEditorFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtEnumPropertyManager>::qt_metacast(_clname);
}

int QtEnumEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtEnumPropertyManager>::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN21QtCursorEditorFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtCursorEditorFactory::qt_create_metaobjectdata<qt_meta_tag_ZN21QtCursorEditorFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtCursorEditorFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotEnumChanged",
        "slotEditorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QCursor &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QCursor, 2 },
        }}),
        // Slot 'slotEnumChanged'
        QtMocHelpers::SlotData<void(QtProperty *, int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtCursorEditorFactory, qt_meta_tag_ZN21QtCursorEditorFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtCursorEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtCursorPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtCursorEditorFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtCursorEditorFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtCursorEditorFactoryE_t>.metaTypes,
    nullptr
} };

void QtCursorEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtCursorEditorFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCursor>>(_a[2]))); break;
        case 1: _t->d_func()->slotEnumChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtCursorEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCursorEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtCursorEditorFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtCursorPropertyManager>::qt_metacast(_clname);
}

int QtCursorEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtCursorPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN20QtColorEditorFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtColorEditorFactory::qt_create_metaobjectdata<qt_meta_tag_ZN20QtColorEditorFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtColorEditorFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotEditorDestroyed",
        "slotSetValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QColor &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QColor, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(const QColor &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QColor, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtColorEditorFactory, qt_meta_tag_ZN20QtColorEditorFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtColorEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtColorPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QtColorEditorFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QtColorEditorFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20QtColorEditorFactoryE_t>.metaTypes,
    nullptr
} };

void QtColorEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtColorEditorFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 1: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtColorEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtColorEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QtColorEditorFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtColorPropertyManager>::qt_metacast(_clname);
}

int QtColorEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtColorPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN19QtFontEditorFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QtFontEditorFactory::qt_create_metaobjectdata<qt_meta_tag_ZN19QtFontEditorFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtFontEditorFactory",
        "slotPropertyChanged",
        "",
        "QtProperty*",
        "slotEditorDestroyed",
        "slotSetValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotPropertyChanged'
        QtMocHelpers::SlotData<void(QtProperty *, const QFont &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QFont, 2 },
        }}),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 2 },
        }}),
        // Slot 'slotSetValue'
        QtMocHelpers::SlotData<void(const QFont &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QFont, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtFontEditorFactory, qt_meta_tag_ZN19QtFontEditorFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtFontEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtFontPropertyManager>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QtFontEditorFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QtFontEditorFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19QtFontEditorFactoryE_t>.metaTypes,
    nullptr
} };

void QtFontEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtFontEditorFactory *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFont>>(_a[2]))); break;
        case 1: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtFontEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtFontEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QtFontEditorFactoryE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtFontPropertyManager>::qt_metacast(_clname);
}

int QtFontEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtFontPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
