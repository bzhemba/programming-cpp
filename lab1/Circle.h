//
// Created by мария баженова on 18.02.2023.
//

#ifndef UNTITLED7_CIRCLE_H
#define UNTITLED7_CIRCLE_H


class Circle {
    int newxc;
    int newyc;

    int r;

public:

    Circle* moveLeft(int x) {
        this->newxc += x;

        this->sendLogs();

        return this;
    }

    Circle* moveUp(int x) {
        this->newyc -= x;

        return this;
    }

    Circle* move(int x, int y) {


        return this;
    }

private:
    void sendLogs() {
        //
    }
};


#endif //UNTITLED7_CIRCLE_H
