#include<iostream>
#include "class.h"

using namespace std;

int main(){
    //7 objects are instantiated, including an array
    wall   small, medium, large, group[4];

    /******** Your code start here**********/
    int length, width;
    cin>>length>>width;
    small.set(length, width);           //assigning values
    
    cin>>length>>width;
    medium.set(length, width);
    
    cin>>length>>width;
    large.set(length, width);

    for(int index=0; index<4; index++){
        cin>>length>>width;
        group[index].set(length, width);
    }	     //group[0] uses default

    /********** end your code *****************/



    cout<<"Area of the small wall is "<<small.get_area()<<"\n";

    cout<<"Area of the medium wall is "<<medium.get_area()<<"\n";

    cout<<"Area of the large wall is "<<large.get_area()<<"\n";

//    cout<<"New length/width group[index].set(index + 10, 10)\n";
    for(int index=0; index<4; index++)
    {
        cout<<"An array of wall area "<<index<<" is "<<group[index].get_area()<<"\n";
    }


    cout<<"Extra data value is "<<small.get_extra()<<"\n";
    cout<<"New Extra data value is "<<medium.get_extra()<<"\n";
    cout<<"New Extra data value is "<<large.get_extra()<<"\n";
    cout<<"New Extra data value is "<<group[0].get_extra()<<"\n";
    cout<<"New Extra data value is "<<group[3].get_extra()<<"\n";
    return 0;
}