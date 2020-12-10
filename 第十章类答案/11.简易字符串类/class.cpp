//
// Created by azuna on 2020/12/2.
//
#include <cstring>
#include "class.h"

String::String(char *myStr) {
    this->myStr = new char[strlen(myStr)];
    strcpy(this->myStr, myStr);
    myLen = strlen(myStr);
}

String::String(String &str) {
    delete[] myStr;
    this->myStr = new char[str.myLen];
    strcpy(this->myStr, str.myStr);
    myLen = str.myLen;
}

String::~String() {
    delete [] myStr;
}

int String::length() {
    return myLen;
}

String String::substr(int start, int end) {
    char *str = new char[end-start+2];
    for (int i = 0; i < end-start+1 ; ++i) {
        str[i] = this->myStr[i+start];
    }

    str[end-start+1] = '\0';

    String res(str);

    return res;
}

int String::find_first_of(char c) {
    for (int i = 0; i < myLen; ++i) {
        if (myStr[i]==c)
            return i;
    }

    return 0;
}

void String::add_before(int index, char c) {
    if (myLen == strlen(myStr)){
        char* temp = myStr;
        this->myStr = new char[myLen*3];
        strcpy(myStr, temp);
        delete[] temp;
    }

    for (int i = myLen; i > index ; --i) {
        myStr[i] = myStr[i-1];
    }
    myStr[index] = c;
    myLen ++;
    myStr[myLen] = '\0';
}

void String::delete_at(int index) {
    for (int i = index; i < myLen; ++i) {
        myStr[i] = myStr[i+1];
    }

}

void String::printStr() {
    std::cout<<myStr<<std::endl;
}
