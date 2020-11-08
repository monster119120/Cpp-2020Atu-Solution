#include <iostream>
using namespace std;

struct Time {
    int hour;
    int minute;
    int second;
};

/***********Start your code here***********/


void setTime(Time* time, int& secondsPassed) {
    cout << "Please input the time you want to set: " << endl;
    int hour, minute, second;
    cin >> hour >> minute >> second;
    while (true)// 时间不格式正确
    {
        if (!(0 <= hour && hour < 24)
            || !(0 <= minute && minute < 60)
            || !(0 <= second && second < 60))
            cout << "Warning! Please input correct time!" << endl;
        else
            break;
        cin >> hour >> minute >> second;
    }
    //时间格式正确之后
    time->hour = hour;
    time->minute = minute;
    time->second = second;

    cout << "Please input how many seconds passed: " << endl;
    cin >> secondsPassed;

}

void showTime(Time* time) {
    char display[20] = { '\0' };
    if (time->hour > 10) {
        display[0] = time->hour / 10 + '0';
        display[1] = time->hour % 10 + '0';
    }
    else {
        display[0] = '0';
        display[1] = time->hour + '0';
    }
    display[2] = ':';

    if (time->minute > 10) {
        display[3] = time->minute / 10 + '0';
        display[4] = time->minute % 10 + '0';
    }
    else {
        display[3] = '0';
        display[4] = time->minute + '0';
    }
    display[5] = ':';

    if (time->second > 10) {
        display[6] = time->second / 10 + '0';
        display[7] = time->second % 10 + '0';
    }
    else {
        display[6] = time->second + '0';
        display[7] = '0';
    }
    display[8] = '\0';
    cout << display << endl;
}

void increaseTime(Time* time) {
    if (time->second < 59)
        time->second += 1;
    else {
        time->second = 0;
        if (time->minute < 59)
            time->minute += 1;
        else {
            time->minute = 0;
            if (time->hour < 23)
                time->hour += 1;
            else {
                time->hour = 0;
                time->minute = 0;
                time->second = 0;
            }
        }
    }
}

/***********End your code*************/
//Please do not modify anything in main()
int main()
{
    //for (int i = 0; i < 20; i++) {
    Time myTimer;
    int secondsPassed;  // how many seconds has passed
    Time* myTimerPointer = &myTimer;


    setTime(myTimerPointer, secondsPassed);

    cout << "Time now is: ";
    showTime(myTimerPointer);

    cout << "Time after " << secondsPassed << " seconds is: ";
    while (secondsPassed-- > 0)
    {
        increaseTime(myTimerPointer);
    }

    showTime(myTimerPointer);
    //}

    return 0;
}

