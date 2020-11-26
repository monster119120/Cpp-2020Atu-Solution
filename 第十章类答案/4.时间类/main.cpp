#include <iostream>
#include "class.h"

Clock Time(Clock& c1, Clock& c2){
    // TODO
    int seconds1 = c1.get_second() + c1.get_minute()*60+ c1.get_hour()*3600;
    int seconds2 = c2.get_second() + c2.get_minute()*60+ c2.get_hour()*3600;

    int remain_seconds = abs(seconds1-seconds2);
    int new_hour = remain_seconds/3600;
    remain_seconds %= 3600;
    int new_minute = remain_seconds/60;
    remain_seconds %= 60;
    int new_second = remain_seconds;

    Clock res;
    res.SetTime(new_hour, new_minute, new_second);
    return res;
}

using namespace std;

int main(){
    // TODO
    Clock c1;
    Clock c2;
    char c = ':';
    int h1, m1, s1;
    int h2, m2, s2;

    cin>>h1>>c>>m1>>c>>s1;
    c1.SetTime(h1, m1, s1);

    cin>>h2>>c>>m2>>c>>s2;
    c2.SetTime(h2, m2, s2);

    Clock diff =  Time(c1, c2);
    diff.DisplayTime();

    return 0;
}