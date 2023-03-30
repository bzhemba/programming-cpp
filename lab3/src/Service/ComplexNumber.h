#ifndef UNTITLED8_COMPLEXNUMBER_H
#define UNTITLED8_COMPLEXNUMBER_H

namespace Service {
    class ComplexNumber {
    private:
        int re;
        int im;
    public:
        ComplexNumber(int i, int j) {
            this->re = i;
            this->im = j;
        }

        ComplexNumber operator*=(float) const;

        ComplexNumber operator+(const ComplexNumber &) const;

        ComplexNumber operator*(const ComplexNumber &) const;

        float operator||(const ComplexNumber &) const;

        float Reresult() const;

        float Imresult() const;
    };
}


#endif //UNTITLED8_COMPLEXNUMBER_H

