
#ifndef LAB4_CIRCLE_H
#define LAB4_CIRCLE_H

#include <iostream>
#include "GeoFig.h"

using namespace std;

namespace DTO {
    class Circle : public GeoFig{
    private:
        double mass_A;
        Vector2D dotA;
        int r;
    public:
        double square() override {
            return (3.14 * r * r);
        }

        double perimeter() override {
            return 2 * 3.14 * r;
        }

        void draw() override {
            cout << " Радиус : " << r;
            cout << " Масса : " << mass() << "кг";
        }

        void initFromDialog() override {
            cout << " Координата x точки A : " << endl;
            cin >> dotA.x;
            cout << " Координата y :  точки А: " << endl;
            cin >> dotA.y;
            cout << " Масса  точки A : " << endl;
            cin >> mass_A;
            cout << " Радиус : " << endl;
            cin >> r;

        }

        string classname() override {
            cout << "Circle";
        }

        unsigned int size() override {
            return sizeof(Circle);
        }

        double mass() override {
            return mass_A;
        }

        Vector2D position() override {
            Vector2D res;
            res.x = (dotA.x * mass_A);
            res.y = (dotA.y * mass_A);
            return res;
        }
    };
}

#endif //LAB4_CIRCLE_H
