#include <iostream>
#include "class.h"
#include <cmath>
#include <iomanip>

using namespace std;

Rectangle overlap(Rectangle rect1, Rectangle rect2) {

    double rec1[4] = {rect1.getx1(),
                      rect1.gety1(),
                      rect1.getx2(),
                      rect1.gety2(),
                      };
    double rec2[4] = {rect2.getx1(),
                      rect2.gety1(),
                      rect2.getx2(),
                      rect2.gety2(),
                      };

    if(!(rec1[2] <= rec2[0] ||   // left
             rec1[3] <= rec2[1] ||   // bottom
             rec1[0] >= rec2[2] ||   // right
             rec1[1] >= rec2[3])){
        double minX = max(rect1.getx1(), rect2.getx1());
        double maxX = min(rect1.getx2(), rect2.getx2());

        double minY = max(rect1.gety1(), rect2.gety1());
        double maxY = min(rect1.gety2(), rect2.gety2());

        Rectangle res(minX, minY, maxX, maxY);
        return res;
    }else{
        Rectangle res(0.0, 0.0, 0.0, 0.0);
        return res;
    }
}


int main(){

    double x1,y1,x2,y2;

    double xx1, yy1, xx2, yy2;

    cin>>x1>> y1>> x2>> y2;
    cin>>xx1>> yy1>> xx2>> yy2;
    Rectangle rect1(x1, y1, x2, y2);
    Rectangle rect2(xx1, yy1, xx2,yy2);

    cout<<setiosflags(ios::fixed)<<setprecision(2);
    cout<<rect1.area()<<endl;
    cout<<rect2.area()<<endl;
    cout<<overlap(rect1, rect2).area()<<endl;

    return 0;
}