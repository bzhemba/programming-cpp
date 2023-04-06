//
// Created by мария баженова on 06.04.2023.
//
#include "App.h"
int App::start(){
    auto equilateraltriangle_factory = new DTO::EquilateralTriangleFactory;
    auto circle_factory = new DTO::CircleFactory;
    vector<DTO::GeoFig *> v;
    vector<pair<int, int>> sortedObjects;
    int n = 0;
    cout << " Какую фигуру добавим? с/t/s (Circle/Equilateral Triangle/Stop)" << endl;
    char c;
    while (cin >> c) {
        if (c == triangle) {
            cout << " Введите данные равностороннего треугольника " << endl;
            DTO::GeoFig *tr = equilateraltriangle_factory->createGeoFig();
            tr->initFromDialog();
            v.push_back(tr);
            n++;
            sortedObjects.push_back(make_pair(tr->mass(), n));
        } else if (c == circle) {
            cout << " Введите данные круга " << endl;
            DTO::GeoFig *circ = circle_factory->createGeoFig();
            circ->initFromDialog();
            v.push_back(circ);
            n++;
            sortedObjects.push_back(make_pair(circ->mass(), n));
        } else if (c == stop) {
            int mt = 0;
            int pt = 0;
            int st = 0;
            int sizt = 0;
            for (int i = 0; i < v.size(); i++) {
                pt += v[i]->perimeter();
                st += v[i]->square();
                sizt += v[i]->size();
                mt += v[i]->mass();
            }
            sort(sortedObjects.begin(), sortedObjects.end());
            cout << " Периметр всех объектов :  " << pt << endl;
            cout << " Площадь всех объектов  равна : " << st << endl;
            cout << " Масса всех объектов : " << mt << endl;
            cout << " Объекты занимают : " << sizt << endl;
            cout << "Объекты в отсортированном порядке : ";
            for (int i = 0; i < sortedObjects.size(); i++) {
                cout << sortedObjects[i].second << ' ';
            }
            break;
        }
        if (c == 't' || c == 'c') {
            cout << " Какую фигуру добавим? с/t/s (Circle/Equilateral Triangle/Stop)" << endl;
        }
    }
    return 0;
}
