#include <iostream>
#include "class.h"
#include <cmath>
#include <iomanip>

using namespace std;

bool overlap(Circle c1, Circle c2) {
    if (sqrt((c1.x-c2.x) *(c1.x-c2.x) + (c2.y-c1.y)*(c2.y-c1.y))
        >= c1.radius+c2.radius)
        return false;
    else
        return true;
}

int main(){

    double x1,x2,y1,y2 ,r1,r2;
    cin>>r1>>x1>>y1;
    cin>>r2>>x2>>y2;
    Circle c1(x1,y1,r1);
    Circle c2(x2,y2,r2);

    if (overlap(c1, c2) ){
        double c = sqrt((c1.getX()-c2.getX()) *(c1.getX()-c2.getX())
                                + (c2.getY()-c1.getY())*(c2.getY()-c1.getY()));

        double a = c1.getRadius();
        double b = c2.getRadius();

        double len = sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/c;
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout<<len<<endl;

    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}