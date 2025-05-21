/****************************************************************************
** Meta object code from reading C++ file 'filepathmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qtpropertybrowser/filepathmanager.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filepathmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15FilePathManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto FilePathManager::qt_create_metaobjectdata<qt_meta_tag_ZN15FilePathManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FilePathManager",
        "valueChanged",
        "",
        "QtProperty*",
        "property",
        "val",
        "filterChanged",
        "fil",
        "setValue",
        "setFilter"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 5 },
        }}),
        // Signal 'filterChanged'
        QtMocHelpers::SignalData<void(QtProperty *, const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 7 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QtProperty *, const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 5 },
        }}),
        // Slot 'setFilter'
        QtMocHelpers::SlotData<void(QtProperty *, const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FilePathManager, qt_meta_tag_ZN15FilePathManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FilePathManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyManager::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15FilePathManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15FilePathManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15FilePathManagerE_t>.metaTypes,
    nullptr
} };

void FilePathManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FilePathManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->filterChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->setFilter((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FilePathManager::*)(QtProperty * , const QString & )>(_a, &FilePathManager::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FilePathManager::*)(QtProperty * , const QString & )>(_a, &FilePathManager::filterChanged, 1))
            return;
    }
}

const QMetaObject *FilePathManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilePathManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15FilePathManagerE_t>.strings))
        return static_cast<void*>(this);
    return QtAbstractPropertyManager::qt_metacast(_clname);
}

int FilePathManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FilePathManager::valueChanged(QtProperty * _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void FilePathManager::filterChanged(QtProperty * _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP
