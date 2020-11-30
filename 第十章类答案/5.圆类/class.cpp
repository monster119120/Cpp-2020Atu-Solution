#include "class.h"
#include <iostream>

using namespace std;

double Circle::getX() {
    return x;
}

double Circle::getY() {
    return y;
}

double Circle::getRadius() {
    return radius;
}

Circle::Circle(double x, double y, double radius) {
    this->x = x;
    this->y = y;
    this->radius = radius;
}




