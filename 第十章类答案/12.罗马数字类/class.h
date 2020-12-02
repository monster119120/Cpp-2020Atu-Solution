//
// Created by azuna on 2020/12/2.
//
#include <iostream>
#ifndef UNTITLED3_CLASS_H
#define UNTITLED3_CLASS_H

class RomanWithInt {
private:
    char str[80];
public:
    RomanWithInt();

    void transfer(char* str=NULL);

    int GetRomanValue(char ch);

    int CheckRight(char ch1, char ch2);

    int RomanNumToDex(char *str);

    void DexToRomanNum(int num);
};


#endif //UNTITLED3_CLASS_H
