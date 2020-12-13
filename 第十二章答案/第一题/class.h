#ifndef CLASS_H
#define CLASS_H
#include <iostream>

using namespace std;

class safeArray{
protected:
    int size;
    int *data;
public:
    safeArray(int size);
    virtual int get(int index);
    virtual void set(int index, int value);
};

class safeArrayWithBound: public safeArray{
protected:
    int lowBound;
    int highBound;
public:
    safeArrayWithBound(int size, int low, int high);
    int get(int index);
    void set(int index, int value);
};

#endif //CLASS_H
