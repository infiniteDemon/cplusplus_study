//
// Created by joker on 22-8-31.
//

#include "Circle.h"

Circle::Circle() {
    this->r = 5.0;
}

Circle::Circle(double R) {
    this->r = R;
}

double Circle::Area() {
    return 3.14*r*r;
}