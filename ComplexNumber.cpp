#include "ComplexNumber.h"
#include <math.h>
#include <stdio.h>
using namespace std;

ComplexNumber ComplexNumber::operator*=(float num){
    return ComplexNumber(re* num, im * num);
}
ComplexNumber ComplexNumber::operator+(const ComplexNumber &other){
    return ComplexNumber(re + other.re, im + other.im);
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber &other){
    return ComplexNumber(re * other.re, im * other.im);
}
float ComplexNumber::operator||(const ComplexNumber &complex){
        return sqrt(pow(re, 2) + pow(im, 2));
    }
float ComplexNumber::Reresult() {
    return this->re;
}
float ComplexNumber::Imresult() {
    return this->im;
}