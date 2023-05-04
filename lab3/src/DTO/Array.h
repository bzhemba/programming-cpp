//
// Created by мария баженова on 19.03.2023.
//

#ifndef NEW_ARRAY_H
#define NEW_ARRAY_H

namespace DTO {
    class Array {
    private:
        int len;
        int *ptr;
    public:
        explicit Array(int);

        void setArrayFromDialog();

        bool operator<(const Array &a2) const;

        bool operator>(const Array &a2) const;

        bool operator==(const Array &a2) const;

        bool operator!=(const Array &a2) const;

        Array operator+(Array &a2);

        void printArray(const Array &a);
    };
}

#endif //NEW_ARRAY_H
