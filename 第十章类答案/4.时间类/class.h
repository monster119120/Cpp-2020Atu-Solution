#ifndef CLASS_H
#define CLASS_H

class Clock
{
private:
    //TODO
    int hour;
    int minute;
    int second;
public:
    void SetTime(int h, int m, int s);
    void DisplayTime();
    int get_hour();
    int get_minute();
    int get_second();
    Clock();
    ~Clock();
};

#endif /* CLASS_H */