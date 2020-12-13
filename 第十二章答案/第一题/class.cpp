#include "class.h"

safeArrayWithBound::safeArrayWithBound(int size, int low, int high) : safeArray(size), lowBound(low), highBound(high) {
};

int safeArray::get(int index) {
    if (index >= size or index < 0) {
        cout<<"Index out of range!"<<endl;
    } else{
        return data[index];
    }
    return -1;
}

void safeArray::set(int index, int value) {
    if (index >= size or index < 0) {
        cout<<"Index out of range!"<<endl;
    } else{
        data[index] = value;
    }
}

safeArray::safeArray(int size) {
    data = new int [size];
    for (int i = 0; i < size; ++i) {
        data[i] = 0;
    }
    this->size = size;
}

int safeArrayWithBound::get(int index) {
    if (index >= highBound or index < lowBound or index < 0)
        cout<<"Index out of range!"<<endl;
    else{
        return data[index];
    }
    return -1;
}

void safeArrayWithBound::set(int index, int value) {
    if (index < 0 or index >= highBound or index < lowBound)
        cout<<"Index out of range!"<<endl;
    else
        data[index] = value;
}
