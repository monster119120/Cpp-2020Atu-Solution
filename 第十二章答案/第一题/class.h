#ifndef CLASS_H
#define CLASS_H
#include <iostream>

using namespace std;

class safeArray{
protected:
    int size;
    int *data;
public:
    safeArray();
    virtual int get(int index);
    virtual void set(int index, int value);
};

class safeArrayWithBound: public safeArray{
protected:
    int lowBound;
    int highBound;
public:
    safeArrayWithBound(int low, int high):lowBound(low), highBound(high){
        delete [] data;
        data = new int [highBound*2];
        for (int i = 0; i < highBound; ++i) {
            data[i] = 0;
        }
        size = 0;
    };
    int get(int index);
    void set(int index, int value);
};

#endif //CLASS_H
