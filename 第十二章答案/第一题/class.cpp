#include "class.h"

safeArrayWithBound::safeArrayWithBound(int low, int high) : safeArray(high), lowBound(low), highBound(high) {
};

bool safeArray::get(int index, int& value) {
    if (index >= size or index < 0) {
        cout<<"Index out of range!"<<endl;
        return false;
    } else{
        value =  data[index];
        return true;
    }
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

bool safeArrayWithBound::get(int index, int& value) {
    if (index >= highBound or index < lowBound or index < 0){
        cout<<"Index out of range!"<<endl;
        return false;
    }
    else{
        value = data[index];
        return true;
    }
}

void safeArrayWithBound::set(int index, int value) {
    if (index < 0 or index >= highBound or index < lowBound)
        cout<<"Index out of range!"<<endl;
    else
        data[index] = value;
}
