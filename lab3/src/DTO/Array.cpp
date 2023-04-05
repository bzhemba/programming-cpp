
#include "iostream"
#include "lab3/src/DTO/Array.h"

using namespace std;
namespace DTO {
    Array::Array(int size) {
        if (size == 0) {
            len = 100;
        } else {
            len = size;
        }
        ptr = new int[len];
        for (int i = 0; i < len; i++) {
            ptr[i] = 0;
        }
    }

    void Array::setArrayFromDialog() {
        for (int ix = 0; ix < len; ix++)
            cin >> ptr[ix];
    }

    bool Array::operator<(const Array &a2) const {
        if (len < a2.len)
            return true;
        else {
            return false;
        }
    }

    bool Array::operator>(const Array &a2) const {
        if (len > a2.len)
            return true;
        else {
            return false;
        }
    }

    bool Array::operator==(const Array &a2) const {
        if (len == a2.len)
            return true;
        else {
            return false;
        }
    }

    bool Array::operator!=(const Array &a2) const {
        if (len != a2.len)
            return true;
        else {
            return false;
        }
    }

    Array Array::operator+(Array &a2) {
        int k = 0;
        Array result(len + a2.len);
        for (int i = 0; i < len; i++) {
            result.ptr[i] = ptr[i];
        }
        for (int i = len; i < a2.len; i++) {
            result.ptr[i] = a2.ptr[i];
        }
        return result;
    }

    void Array::printArray(const Array &a) {
        for(int i = 0; i < a.len; i++){
            cout << ptr[i];
        }

    };
}


