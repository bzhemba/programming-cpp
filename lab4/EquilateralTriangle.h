//
// Created by мария баженова on 27.02.2023.
//

#ifndef LAB4_EQUILATERALTRIANGLE_H
#define LAB4_EQUILATERALTRIANGLE_H

#include <iostream>
#include <cmath>
#include "GeoFig.h"
#include "PhysObject.h"
#include "Printable.h"
#include "DialogInitiable.h"
#include "BaseCObject.h"

using namespace std;

class EquilateralTriangle: public GeoFig, PhysObject, Printable, DialogInitiable, BaseCObject {
private:
    double mass_A;
    double mass_B;
    double mass_C;
    Vector2D dotA;
    Vector2D dotB;
    Vector2D dotC;
    int side;
public:
    Vector2D position() override{
        Vector2D res;
        res.x = (dotA.x *  mass_A + dotB.x * mass_B) / (mass_A + mass_B);
        res.y = (dotA.y *  mass_A + dotB.y * mass_B) / (mass_A + mass_B);
        return res;
    }
    double square() override{
        return (side*side * sqrt(3))/ 4;
    }
    double perimeter() override{
        return 3 * side;
    }
    void draw() override{
        cout << " Длина стороны : " << side;
        cout << " Масса : " << mass() << "кг";
    }
    void initFromDialog() override{
        cout << " Координата x точки A : " << endl;
        cin >> dotA.x;
        cout << " Координата y :  точки А: " << endl;
        cin >> dotA.y;
        cout << " Координата x точки В : " << endl;
        cin >> dotB.x;
        cout << " Координата y :  точки В: " << endl;
        cin >> dotB.y;
        cout << " Координата x :  точки C: " << endl;
        cin >> dotC.x;
        cout << " Координата y :  точки C: " << endl;
        cin >> dotC.y;
        cout << " Масса  точки A : " << endl;
        cin >> mass_A;
        cout << " Масса  точки В : " << endl;
        cin >> mass_B;
        cout << " Масса  точки C : " << endl;
        cin >> mass_C;
        cout << " Длина стороны : " << endl;
        cin >> side;

    }
    string classname() override{
        cout << "Equilateral Triangle";
    }
    unsigned int size() override{
        return sizeof(EquilateralTriangle);
    }
    double mass() override{
        return mass_A + mass_B + mass_C;
    }

};


#endif //LAB4_EQUILATERALTRIANGLE_H
