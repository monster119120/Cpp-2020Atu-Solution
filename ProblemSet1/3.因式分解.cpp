#include <iostream>

using namespace std;

int main(int argc, char const* argv[]){
    int n;
    cin >> n;
    /*** Your code here ***/
    /*
        This problem can be treated as: given a number n,
        determine whether n can be decompose to n = 2^a * 3^b * 5*c,
        If so then return 1*a+2*b+3*c, if not return -1.
    */
    int count=0;
    while(n%2==0){
        n/=2;
        count++;
    }
    while(n%3==0){
        n/=3;
        count+=2;
    }
    while(n%5==0){
        n/=5;
        count+=3;
    }

    if(n!=1){
        cout<<-1<<endl;
    }else{
        cout<<count<<endl;
    }
    /******** End *********/

    return 0;
}