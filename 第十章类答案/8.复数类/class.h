#ifndef CLASS_H
#define CLASS_H

class plural{
private:
    // x + iy
    double x;
    double y;
public:
    double getx();
    double gety();

    plural(double x=0.0, double y=0.0);
    plural(plural& plur);

    friend void operation(plural p1, plural p2);
};

#endif /* CLASS_H */