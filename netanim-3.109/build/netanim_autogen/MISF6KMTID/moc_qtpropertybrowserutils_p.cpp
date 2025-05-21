/****************************************************************************
** Meta object code from reading C++ file 'qtpropertybrowserutils_p.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qtpropertybrowser/qtpropertybrowserutils_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtpropertybrowserutils_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10QtBoolEditE_t {};
} // unnamed namespace

template <> constexpr inline auto QtBoolEdit::qt_create_metaobjectdata<qt_meta_tag_ZN10QtBoolEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtBoolEdit",
        "toggled",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'toggled'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtBoolEdit, qt_meta_tag_ZN10QtBoolEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtBoolEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QtBoolEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QtBoolEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10QtBoolEditE_t>.metaTypes,
    nullptr
} };

void QtBoolEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtBoolEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtBoolEdit::*)(bool )>(_a, &QtBoolEdit::toggled, 0))
            return;
    }
}

const QMetaObject *QtBoolEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtBoolEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QtBoolEditE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QtBoolEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QtBoolEdit::toggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN17QtKeySequenceEditE_t {};
} // unnamed namespace

template <> constexpr inline auto QtKeySequenceEdit::qt_create_metaobjectdata<qt_meta_tag_ZN17QtKeySequenceEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtKeySequenceEdit",
        "keySequenceChanged",
        "",
        "QKeySequence",
        "sequence",
        "setKeySequence",
        "slotClearShortcut"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'keySequenceChanged'
        QtMocHelpers::SignalData<void(const QKeySequence &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'setKeySequence'
        QtMocHelpers::SlotData<void(const QKeySequence &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'slotClearShortcut'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtKeySequenceEdit, qt_meta_tag_ZN17QtKeySequenceEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtKeySequenceEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtKeySequenceEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtKeySequenceEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17QtKeySequenceEditE_t>.metaTypes,
    nullptr
} };

void QtKeySequenceEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtKeySequenceEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->keySequenceChanged((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 1: _t->setKeySequence((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 2: _t->slotClearShortcut(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtKeySequenceEdit::*)(const QKeySequence & )>(_a, &QtKeySequenceEdit::keySequenceChanged, 0))
            return;
    }
}

const QMetaObject *QtKeySequenceEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtKeySequenceEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QtKeySequenceEditE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QtKeySequenceEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QtKeySequenceEdit::keySequenceChanged(const QKeySequence & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
