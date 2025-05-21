/****************************************************************************
** Meta object code from reading C++ file 'qtbuttonpropertybrowser.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qtpropertybrowser/qtbuttonpropertybrowser.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtbuttonpropertybrowser.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23QtButtonPropertyBrowserE_t {};
} // unnamed namespace

template <> constexpr inline auto QtButtonPropertyBrowser::qt_create_metaobjectdata<qt_meta_tag_ZN23QtButtonPropertyBrowserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtButtonPropertyBrowser",
        "collapsed",
        "",
        "QtBrowserItem*",
        "item",
        "expanded",
        "slotUpdate",
        "slotEditorDestroyed",
        "slotToggled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'collapsed'
        QtMocHelpers::SignalData<void(QtBrowserItem *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'expanded'
        QtMocHelpers::SignalData<void(QtBrowserItem *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'slotUpdate'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotEditorDestroyed'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotToggled'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtButtonPropertyBrowser, qt_meta_tag_ZN23QtButtonPropertyBrowserE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtButtonPropertyBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyBrowser::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtButtonPropertyBrowserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtButtonPropertyBrowserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23QtButtonPropertyBrowserE_t>.metaTypes,
    nullptr
} };

void QtButtonPropertyBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtButtonPropertyBrowser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->collapsed((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        case 1: _t->expanded((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        case 2: _t->d_func()->slotUpdate(); break;
        case 3: _t->d_func()->slotEditorDestroyed(); break;
        case 4: _t->d_func()->slotToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtButtonPropertyBrowser::*)(QtBrowserItem * )>(_a, &QtButtonPropertyBrowser::collapsed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtButtonPropertyBrowser::*)(QtBrowserItem * )>(_a, &QtButtonPropertyBrowser::expanded, 1))
            return;
    }
}

const QMetaObject *QtButtonPropertyBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtButtonPropertyBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QtButtonPropertyBrowserE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyBrowser::qt_metacast(_clname);
}

int QtButtonPropertyBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyBrowser::qt_metacall(_c, _id, _a);
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
void QtButtonPropertyBrowser::collapsed(QtBrowserItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QtButtonPropertyBrowser::expanded(QtBrowserItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
