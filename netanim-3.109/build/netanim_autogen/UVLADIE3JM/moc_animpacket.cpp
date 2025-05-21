/****************************************************************************
** Meta object code from reading C++ file 'animpacket.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/animpacket.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animpacket.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7netanim19AnimWirelessCirclesE_t {};
} // unnamed namespace

template <> constexpr inline auto netanim::AnimWirelessCircles::qt_create_metaobjectdata<qt_meta_tag_ZN7netanim19AnimWirelessCirclesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "netanim::AnimWirelessCircles",
        "rect"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'rect'
        QtMocHelpers::PropertyData<QRectF>(1, QMetaType::QRectF, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AnimWirelessCircles, qt_meta_tag_ZN7netanim19AnimWirelessCirclesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject netanim::AnimWirelessCircles::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim19AnimWirelessCirclesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim19AnimWirelessCirclesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7netanim19AnimWirelessCirclesE_t>.metaTypes,
    nullptr
} };

void netanim::AnimWirelessCircles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnimWirelessCircles *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QRectF*>(_v) = _t->rect(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRect(*reinterpret_cast<QRectF*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *netanim::AnimWirelessCircles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::AnimWirelessCircles::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim19AnimWirelessCirclesE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsEllipseItem"))
        return static_cast< QGraphicsEllipseItem*>(this);
    return QObject::qt_metacast(_clname);
}

int netanim::AnimWirelessCircles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN7netanim10AnimPacketE_t {};
} // unnamed namespace

template <> constexpr inline auto netanim::AnimPacket::qt_create_metaobjectdata<qt_meta_tag_ZN7netanim10AnimPacketE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "netanim::AnimPacket",
        "pos"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'pos'
        QtMocHelpers::PropertyData<QPointF>(1, QMetaType::QPointF, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AnimPacket, qt_meta_tag_ZN7netanim10AnimPacketE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject netanim::AnimPacket::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim10AnimPacketE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim10AnimPacketE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7netanim10AnimPacketE_t>.metaTypes,
    nullptr
} };

void netanim::AnimPacket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnimPacket *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QPointF*>(_v) = _t->pos(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPos(*reinterpret_cast<QPointF*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *netanim::AnimPacket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::AnimPacket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7netanim10AnimPacketE_t>.strings))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int netanim::AnimPacket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
