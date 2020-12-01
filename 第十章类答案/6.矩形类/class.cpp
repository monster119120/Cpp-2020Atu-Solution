#include "class.h"
#include <iostream>

using namespace std;


Rectangle::Rectangle(double x1, double y1, double x2, double y2){
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
}

double Rectangle::getx1() {
    return x1;
}

double Rectangle::gety1() {
    return y1;
}

double Rectangle::getx2() {
    return x2;
}

double Rectangle::gety2() {
    return y2;
}

Rectangle::Rectangle(Rectangle &rect) {
    x1 = rect.x1;
    y1 = rect.y1;
    x2 = rect.x2;
    y2 = rect.y2;
}

double Rectangle::area() {
    return (y2-y1)*(x2-x1);
}





