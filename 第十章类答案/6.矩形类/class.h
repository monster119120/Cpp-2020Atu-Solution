#ifndef CLASS_H
#define CLASS_H

class Rectangle{
private:
    double x1;
    double y1; // left down point
    double x2;
    double y2; // right up point
public:
    double getx1();
    double gety1();
    double getx2();
    double gety2();
    double area();
    Rectangle(double x1=0.0, double y1=0.0, double x2=0.0, double y2=0.0);
    Rectangle(Rectangle& rect);

    friend Rectangle overlap(Rectangle rect1, Rectangle rect2);
};

#endif /* CLASS_H */