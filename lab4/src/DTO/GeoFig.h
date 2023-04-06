#ifndef LAB4_GEOFIG_H
#define LAB4_GEOFIG_H

#include "PhysObject.h"
#include "Printable.h"
#include "DialogInitiable.h"
#include "BaseCObject.h"

namespace DTO {
    class GeoFig: public PhysObject, public Printable, public DialogInitiable, public BaseCObject {
    public:
        virtual double square() = 0;

        virtual double perimeter() = 0;
    };
}

#endif //LAB4_GEOFIG_H
