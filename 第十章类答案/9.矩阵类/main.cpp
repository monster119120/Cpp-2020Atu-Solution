#include <iostream>
#include "class.h"


using namespace std;

int main(){
    Matrix m1;
    m1.read();
    m1.Transpose();
    m1.show();
    m1.Determinant();

    return 0;
}