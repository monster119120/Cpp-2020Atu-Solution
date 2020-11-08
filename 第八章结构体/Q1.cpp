#include <iostream>
using namespace std;

struct Time {
    int hour;
    int minute;
    int second;
};

/***********Start your code here***********/



/***********End your code*************/
//Please do not modify anything in main()

int main()
{
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
    return 0;
}

