#include "class.h"
#include <iostream>

using namespace std;

//TODO

Clock::Clock() {
    hour = 0;
    minute = 0;
    second = 0;
}

Clock::~Clock() {

}

int Clock::get_hour() {
    return hour;
}

int Clock::get_minute() {
    return minute;
}

int Clock::get_second() {
    return second;
}

void Clock::DisplayTime() {
    char display[20] = { '\0' };
    if (hour > 10) {
        display[0] = hour / 10 + '0';
        display[1] = hour % 10 + '0';
    }
    else {
        display[0] = '0';
        display[1] = hour + '0';
    }
    display[2] = ':';

    if (minute > 10) {
        display[3] = minute / 10 + '0';
        display[4] = minute % 10 + '0';
    }
    else {
        display[3] = '0';
        display[4] = minute + '0';
    }
    display[5] = ':';

    if (second > 10) {
        display[6] = second / 10 + '0';
        display[7] = second % 10 + '0';
    }
    else {
        display[7] = second + '0';
        display[6] = '0';
    }
    display[8] = '\0';
    cout << display << endl;
}

void Clock::SetTime(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}