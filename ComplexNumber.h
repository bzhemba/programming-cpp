//
// Created by мария баженова on 24.02.2023.
//

#ifndef UNTITLED8_COMPLEXNUMBER_H
#define UNTITLED8_COMPLEXNUMBER_H


class ComplexNumber {
private:
    int re;
    int im;
public:
    ComplexNumber(int i, int j) {
        this->re = i;
        this->im = j;
    }

    ComplexNumber operator*=(float);
    ComplexNumber operator+(const ComplexNumber&);
    ComplexNumber operator*(const ComplexNumber&);
    float operator||(const ComplexNumber&);
    float Reresult();
    float Imresult();
};


#endif //UNTITLED8_COMPLEXNUMBER_H

