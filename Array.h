//
// Created by мария баженова on 19.03.2023.
//

#ifndef NEW_ARRAY_H
#define NEW_ARRAY_H


class Array {
private:
    int len;
    int *ptr;
public:
    Array(int);
    void setArray();
    bool operator <(const Array &a2) const;
    bool operator >(const Array &a2) const;
    bool operator ==(const Array &a2) const;
    bool operator !=(const Array &a2) const;
    Array operator+(Array &a2);
};


#endif //NEW_ARRAY_H
