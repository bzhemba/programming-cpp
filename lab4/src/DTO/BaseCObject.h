#ifndef LAB4_BASECOBJECT_H
#define LAB4_BASECOBJECT_H

namespace DTO {
    class BaseCObject {
    public:

// Имя класса (типа данных).

        virtual std::string classname() = 0;

// Размер занимаемой памяти.

        virtual unsigned int size() = 0;
    };
}

#endif //LAB4_BASECOBJECT_H
