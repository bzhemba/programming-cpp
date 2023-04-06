//
// Created by мария баженова on 06.04.2023.
//
#include "EquilateralTriangle.h"
#include "GeoFig.h"
#include "Circle.h"
namespace DTO {
    class Factory {
    public:
        virtual GeoFig *createGeoFig() = 0;

        virtual ~Factory() {}
    };

    class EquilateralTriangleFactory : public Factory {
    public:
        GeoFig *createGeoFig() {
            return new EquilateralTriangle();
        }
    };

    class CircleFactory : public Factory {
    public:
        GeoFig *createGeoFig() {
            return new Circle();
        }
    };
}
