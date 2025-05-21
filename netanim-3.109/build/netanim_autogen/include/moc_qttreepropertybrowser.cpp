/****************************************************************************
** Meta object code from reading C++ file 'qttreepropertybrowser.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qtpropertybrowser/qttreepropertybrowser.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qttreepropertybrowser.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21QtTreePropertyBrowserE_t {};
} // unnamed namespace

template <> constexpr inline auto QtTreePropertyBrowser::qt_create_metaobjectdata<qt_meta_tag_ZN21QtTreePropertyBrowserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtTreePropertyBrowser",
        "collapsed",
        "",
        "QtBrowserItem*",
        "item",
        "expanded",
        "slotCollapsed",
        "QModelIndex",
        "slotExpanded",
        "slotCurrentBrowserItemChanged",
        "slotCurrentTreeItemChanged",
        "QTreeWidgetItem*",
        "indentation",
        "rootIsDecorated",
        "alternatingRowColors",
        "headerVisible",
        "resizeMode",
        "ResizeMode",
        "splitterPosition",
        "propertiesWithoutValueMarked",
        "Interactive",
        "Stretch",
        "Fixed",
        "ResizeToContents"
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
        // Slot 'slotCollapsed'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 2 },
        }}),
        // Slot 'slotExpanded'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 2 },
        }}),
        // Slot 'slotCurrentBrowserItemChanged'
        QtMocHelpers::SlotData<void(QtBrowserItem *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'slotCurrentTreeItemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QTreeWidgetItem *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 2 }, { 0x80000000 | 11, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'indentation'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'rootIsDecorated'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'alternatingRowColors'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'headerVisible'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'resizeMode'
        QtMocHelpers::PropertyData<ResizeMode>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'splitterPosition'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'propertiesWithoutValueMarked'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ResizeMode'
        QtMocHelpers::EnumData<ResizeMode>(17, 17, QMC::EnumFlags{}).add({
            {   20, ResizeMode::Interactive },
            {   21, ResizeMode::Stretch },
            {   22, ResizeMode::Fixed },
            {   23, ResizeMode::ResizeToContents },
        }),
    };
    return QtMocHelpers::metaObjectData<QtTreePropertyBrowser, qt_meta_tag_ZN21QtTreePropertyBrowserE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtTreePropertyBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyBrowser::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtTreePropertyBrowserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtTreePropertyBrowserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QtTreePropertyBrowserE_t>.metaTypes,
    nullptr
} };

void QtTreePropertyBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtTreePropertyBrowser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->collapsed((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        case 1: _t->expanded((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        case 2: _t->d_func()->slotCollapsed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->d_func()->slotExpanded((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->d_func()->slotCurrentBrowserItemChanged((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        case 5: _t->d_func()->slotCurrentTreeItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtTreePropertyBrowser::*)(QtBrowserItem * )>(_a, &QtTreePropertyBrowser::collapsed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtTreePropertyBrowser::*)(QtBrowserItem * )>(_a, &QtTreePropertyBrowser::expanded, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->indentation(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->rootIsDecorated(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->alternatingRowColors(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isHeaderVisible(); break;
        case 4: *reinterpret_cast<ResizeMode*>(_v) = _t->resizeMode(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->splitterPosition(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->propertiesWithoutValueMarked(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIndentation(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setRootIsDecorated(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setAlternatingRowColors(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setHeaderVisible(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setResizeMode(*reinterpret_cast<ResizeMode*>(_v)); break;
        case 5: _t->setSplitterPosition(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setPropertiesWithoutValueMarked(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QtTreePropertyBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTreePropertyBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QtTreePropertyBrowserE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyBrowser::qt_metacast(_clname);
}

int QtTreePropertyBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyBrowser::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QtTreePropertyBrowser::collapsed(QtBrowserItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QtTreePropertyBrowser::expanded(QtBrowserItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
