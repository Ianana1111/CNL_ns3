/****************************************************************************
** Meta object code from reading C++ file 'fileedit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qtpropertybrowser/fileedit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileedit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8FileEditE_t {};
} // unnamed namespace

template <> constexpr inline auto FileEdit::qt_create_metaobjectdata<qt_meta_tag_ZN8FileEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FileEdit",
        "filePathChanged",
        "",
        "filePath",
        "buttonClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'filePathChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'buttonClicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileEdit, qt_meta_tag_ZN8FileEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FileEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8FileEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8FileEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8FileEditE_t>.metaTypes,
    nullptr
} };

void FileEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->filePathChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->buttonClicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FileEdit::*)(const QString & )>(_a, &FileEdit::filePathChanged, 0))
            return;
    }
}

const QMetaObject *FileEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8FileEditE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FileEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void FileEdit::filePathChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
