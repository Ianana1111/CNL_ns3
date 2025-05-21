/****************************************************************************
** Meta object code from reading C++ file 'qtpropertybrowser.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qtpropertybrowser/qtpropertybrowser.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtpropertybrowser.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25QtAbstractPropertyManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QtAbstractPropertyManager::qt_create_metaobjectdata<qt_meta_tag_ZN25QtAbstractPropertyManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtAbstractPropertyManager",
        "propertyInserted",
        "",
        "QtProperty*",
        "property",
        "parent",
        "after",
        "propertyChanged",
        "propertyRemoved",
        "propertyDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'propertyInserted'
        QtMocHelpers::SignalData<void(QtProperty *, QtProperty *, QtProperty *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 }, { 0x80000000 | 3, 6 },
        }}),
        // Signal 'propertyChanged'
        QtMocHelpers::SignalData<void(QtProperty *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'propertyRemoved'
        QtMocHelpers::SignalData<void(QtProperty *, QtProperty *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Signal 'propertyDestroyed'
        QtMocHelpers::SignalData<void(QtProperty *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtAbstractPropertyManager, qt_meta_tag_ZN25QtAbstractPropertyManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtAbstractPropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QtAbstractPropertyManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QtAbstractPropertyManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25QtAbstractPropertyManagerE_t>.metaTypes,
    nullptr
} };

void QtAbstractPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtAbstractPropertyManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->propertyInserted((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[3]))); break;
        case 1: _t->propertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        case 2: _t->propertyRemoved((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[2]))); break;
        case 3: _t->propertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtAbstractPropertyManager::*)(QtProperty * , QtProperty * , QtProperty * )>(_a, &QtAbstractPropertyManager::propertyInserted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtAbstractPropertyManager::*)(QtProperty * )>(_a, &QtAbstractPropertyManager::propertyChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtAbstractPropertyManager::*)(QtProperty * , QtProperty * )>(_a, &QtAbstractPropertyManager::propertyRemoved, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtAbstractPropertyManager::*)(QtProperty * )>(_a, &QtAbstractPropertyManager::propertyDestroyed, 3))
            return;
    }
}

const QMetaObject *QtAbstractPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAbstractPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QtAbstractPropertyManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtAbstractPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QtAbstractPropertyManager::propertyInserted(QtProperty * _t1, QtProperty * _t2, QtProperty * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void QtAbstractPropertyManager::propertyChanged(QtProperty * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QtAbstractPropertyManager::propertyRemoved(QtProperty * _t1, QtProperty * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void QtAbstractPropertyManager::propertyDestroyed(QtProperty * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN27QtAbstractEditorFactoryBaseE_t {};
} // unnamed namespace

template <> constexpr inline auto QtAbstractEditorFactoryBase::qt_create_metaobjectdata<qt_meta_tag_ZN27QtAbstractEditorFactoryBaseE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtAbstractEditorFactoryBase",
        "managerDestroyed",
        "",
        "manager"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'managerDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QObjectStar, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtAbstractEditorFactoryBase, qt_meta_tag_ZN27QtAbstractEditorFactoryBaseE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtAbstractEditorFactoryBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27QtAbstractEditorFactoryBaseE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27QtAbstractEditorFactoryBaseE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN27QtAbstractEditorFactoryBaseE_t>.metaTypes,
    nullptr
} };

void QtAbstractEditorFactoryBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtAbstractEditorFactoryBase *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->managerDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtAbstractEditorFactoryBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAbstractEditorFactoryBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27QtAbstractEditorFactoryBaseE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtAbstractEditorFactoryBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN25QtAbstractPropertyBrowserE_t {};
} // unnamed namespace

template <> constexpr inline auto QtAbstractPropertyBrowser::qt_create_metaobjectdata<qt_meta_tag_ZN25QtAbstractPropertyBrowserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtAbstractPropertyBrowser",
        "currentItemChanged",
        "",
        "QtBrowserItem*",
        "addProperty",
        "QtProperty*",
        "property",
        "insertProperty",
        "afterProperty",
        "removeProperty",
        "slotPropertyInserted",
        "slotPropertyRemoved",
        "slotPropertyDestroyed",
        "slotPropertyDataChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentItemChanged'
        QtMocHelpers::SignalData<void(QtBrowserItem *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'addProperty'
        QtMocHelpers::SlotData<QtBrowserItem *(QtProperty *)>(4, 2, QMC::AccessPublic, 0x80000000 | 3, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'insertProperty'
        QtMocHelpers::SlotData<QtBrowserItem *(QtProperty *, QtProperty *)>(7, 2, QMC::AccessPublic, 0x80000000 | 3, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 5, 8 },
        }}),
        // Slot 'removeProperty'
        QtMocHelpers::SlotData<void(QtProperty *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'slotPropertyInserted'
        QtMocHelpers::SlotData<void(QtProperty *, QtProperty *, QtProperty *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 2 }, { 0x80000000 | 5, 2 }, { 0x80000000 | 5, 2 },
        }}),
        // Slot 'slotPropertyRemoved'
        QtMocHelpers::SlotData<void(QtProperty *, QtProperty *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 2 }, { 0x80000000 | 5, 2 },
        }}),
        // Slot 'slotPropertyDestroyed'
        QtMocHelpers::SlotData<void(QtProperty *)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'slotPropertyDataChanged'
        QtMocHelpers::SlotData<void(QtProperty *)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtAbstractPropertyBrowser, qt_meta_tag_ZN25QtAbstractPropertyBrowserE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtAbstractPropertyBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QtAbstractPropertyBrowserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QtAbstractPropertyBrowserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25QtAbstractPropertyBrowserE_t>.metaTypes,
    nullptr
} };

void QtAbstractPropertyBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtAbstractPropertyBrowser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentItemChanged((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        case 1: { QtBrowserItem* _r = _t->addProperty((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QtBrowserItem**>(_a[0]) = std::move(_r); }  break;
        case 2: { QtBrowserItem* _r = _t->insertProperty((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QtBrowserItem**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->removeProperty((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        case 4: _t->d_func()->slotPropertyInserted((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[3]))); break;
        case 5: _t->d_func()->slotPropertyRemoved((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[2]))); break;
        case 6: _t->d_func()->slotPropertyDestroyed((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        case 7: _t->d_func()->slotPropertyDataChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtAbstractPropertyBrowser::*)(QtBrowserItem * )>(_a, &QtAbstractPropertyBrowser::currentItemChanged, 0))
            return;
    }
}

const QMetaObject *QtAbstractPropertyBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAbstractPropertyBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QtAbstractPropertyBrowserE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QtAbstractPropertyBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QtAbstractPropertyBrowser::currentItemChanged(QtBrowserItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
