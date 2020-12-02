#include<iostream>
#include "class.h"

using namespace std;



int main(){
    JosephCircle jc;

    int num;
    int final;
    cin>>num>>final;

    for(int i = 1;i <= num;i++){
        jc.Add(i);
    }
    jc.Eliminate(final);
    jc.Print();
    return 0;
}