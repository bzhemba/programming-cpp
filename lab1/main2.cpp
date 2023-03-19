#include <math.h>
#include <iostream>
#include <complex>
#include <vector>
#include "main2.h"
#include "Circle.h"

using namespace std;

vector<int> &replacep(int *x, int *y) {
    int hr;
    hr = *x;
    *x = *y;
    *y = hr;
    vector<int> result = {x, y};
    return result;
}

int intpartp(double *x) {
    int d;
    d = *x;
    return d;
}

vector<double> &ComplexnumberMultiplicationp(complex<double> *z, double *con) {
    double r = (*z).real();
    double im = (*z).imag();
    double pr = r * (*con);
    double pim = im * (*con);
    vector<double> result = {pr, pim};
    return result;
}

vector<int> &circleShiftp(int *x, int *y, int *xc, int *yc) {
    int newxc;
    int newyc;
    newxc = *x + *xc;
    newyc = *y + *yc;
    vector<int> result = {newxc, newyc};
    return result;
}

vector<int> &replacel(int &x, int &y) {
    int hr;
    hr = x;
    x = y;
    y = hr;
    vector<int> result = {x, y};
    return result;
}

int intpartl(double &x) {
    int d;
    d = x;
    return d;
}

vector<double> &ComplexnumberMultiplicationl(complex<double> &z, double &con) {
    double r = z.real();
    double pim = z.imag();
    double pr = r * con;
    vector<double> result = {pr, pim};
    return result;
}

vector<int> &circleShiftl(int &x, int &y, int &xc, int &yc) {
    int newxc;
    int newyc;
    newxc = x + xc;
    newyc = y + yc;
    vector<int> result = {newxc, newyc};
    return result;
}

void isCorrect() {
    int x = 1;
    int y = 2;
    double a = 5.76543;
    complex<double> z(7.0, 8.0);
    auto c = 5.0;
    int xc = 5;
    int yc = 3;
    int xcc = 1;
    int ycc = 2;
    vector<int> v1;
    if (
            replacep(&x, &y) == replacel(x, y) &&
            intpartp(&a) == intpartl(a) &&
            ComplexnumberMultiplicationp(&z, &c) == ComplexnumberMultiplicationl(z, c) &&
                    circleShiftp(&xc, &yc, &xcc, &ycc) == circleShiftl(xc, yc, xcc, ycc)
    ) {
        cout << "all work the same";
    }

    cout << "something went wrong";

    //
    auto circle = new Circle();

    circle
        ->moveLeft(5)
        ->moveUp(6)
    ;
}
