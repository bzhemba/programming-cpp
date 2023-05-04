#ifndef LAB4_PHYSOBJECT_H
#define LAB4_PHYSOBJECT_H
#include "Vector2D.h"
namespace DTO {
    class PhysObject {
    public:
        virtual double mass() = 0;

        virtual DTO::Vector2D position() = 0;
//    virtual bool operator== ( const PhysObject& ob ) const = 0;
//    virtual bool operator< ( const PhysObject& ob ) const = 0;
    };
}

#endif //LAB4_PHYSOBJECT_H
