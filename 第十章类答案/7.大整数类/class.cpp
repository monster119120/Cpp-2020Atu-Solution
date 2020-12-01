#include "class.h"
#include <iostream>
using namespace std;

double plural::getx() {
    return x;
}

double plural::gety() {
    return y;
}

plural::plural(double x, double y){
    this->x = x;
    this->y = y;
}

plural::plural(plural &plur) {
    this->x = plur.x;
    this->y = plur.y;
}



