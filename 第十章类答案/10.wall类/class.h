#include <iostream>
#include  <stdlib.h>
#ifndef CLASS_H
#define CLASS_H

//-------class declaration--------
class  wall
{
    int  length;
    int  width;
    //declaration of the extra_data static type
    static int  extra_data;
public:
    wall();
    void set(int new_length, int new_width);
    int get_area();
    int get_extra();
};

#endif //CLASS_H
