#include <iostream>
#include "class.h"
#include <cmath>
#include <iomanip>


using namespace std;


void operation(plural p1, plural p2) {
    double a = p1.x;
    double b = p1.y;
    double c = p2.x;
    double d = p2.y;

    cout<<setiosflags(ios::fixed)<<setprecision(2);
    // plus
    cout<<a+c<<" "<<b+d<<endl;
    // sub
    cout<<a-c<<" "<<b-d<<endl;
    // time
    cout<<(a*c-b*d)<<" "<<(b*c+a*d)<<endl;
    // divide
    cout<<(a*c+b*d)/(pow(c,2)+pow(d,2))<<" "<<(b*c-a*d)/(pow(c,2)+pow(d,2))<<endl;

}

int main(){

    double x1 ,y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    plural p1(x1,y1);
    plural p2(x2,y2);

    operation(p1,p2);
    return 0;
}