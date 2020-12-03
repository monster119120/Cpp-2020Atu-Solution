//
// Created by azuna on 2020/12/2.
//
#include <cstring>
#include <iostream>
#include "class.h"

using namespace std;

int wall::extra_data;  //Definition of extra_data

//constructor, assigning initial values
wall::wall()
{
    length = 8;
    width = 8;
    extra_data = 1;
}

//This method will set a wall size to the two input parameters
void wall::set(int new_length, int new_width)
{
    length = new_length;
    width = new_width;
}

//This method will calculate and return the area of a wall instance
int wall::get_area()
{
    return (length * width);
}

int wall::get_extra()  {
    return  extra_data++;
}
