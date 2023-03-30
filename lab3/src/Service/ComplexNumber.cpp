#include "lab3/src/Service/ComplexNumber.h"
#include <math.h>
#include <stdio.h>
using namespace std;
namespace Service {
    ComplexNumber ComplexNumber::operator*=(float num) const {
        return ComplexNumber(re * num, im * num);
    }

    ComplexNumber ComplexNumber::operator+(const ComplexNumber &other) const {
        return {re + other.re, im + other.im};
    }

    ComplexNumber ComplexNumber::operator*(const ComplexNumber &other) const {
        return {re * other.re, im * other.im};
    }

    float ComplexNumber::operator||(const ComplexNumber &complex) const {
        return sqrt(pow(re, 2) + pow(im, 2));
    }

    float ComplexNumber::Reresult() const {
        return this->re;
    }

    float ComplexNumber::Imresult() const {
        return this->im;
    }
}