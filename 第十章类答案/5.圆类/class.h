#ifndef CLASS_H
#define CLASS_H

class Circle{
private:
    double x;
    double y;
    double radius;
public:
    double getX();
    double getY();
    double getRadius();
    Circle(double x=0.0, double y=0.0, double radius=0.0);
    friend bool overlap(Circle c1, Circle c2);
};

#endif /* CLASS_H */