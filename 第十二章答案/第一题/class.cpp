#include "class.h"

safeArray::safeArray() {
    data = new int [10];
    for (int i = 0; i < 10; ++i) {
        data[i] = 0;
    }
    size = 10;
}

int safeArray::get(int index) {
    if (index >= size or index < 0) {
        cout<<"Index out of range!"<<endl;
    } else{
        return data[index];
    }
    return -1;
}

void safeArray::set(int index, int value) {
    if (index < 0){
        cout<<"Index must not be less than 0!"<<endl;
    }else if (index >= size) {
        int* temp = data;
        data = new int[2*index];

        for (int i=0; i<size; i++){
            data[i] = temp[i];
        }
        delete [] temp;

        for (int i=size; i<index; i++){
            data[i] = 0;
        }

        size =2*index;
        data[index] = value;
    } else{
        data[index] = value;
    }
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
