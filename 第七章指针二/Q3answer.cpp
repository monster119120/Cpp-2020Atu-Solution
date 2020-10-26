#include <iostream>
#include <cstdlib>
using namespace std;

void getDate(int& dd, int& mm, int& yy) {
    char str[20] = { '\0' };
cin >> str;
int flag=(str[1]=='-')?1:0;
    char monthname[13][20] = { "","Jan","Feb","Mar",
        "Apr","May","Jun","Jul","Aug","Sep",
        "Oct","Nov","Dec" };
    str[2-flag] = '\0';
    str[6-flag] = '\0';
    str[9-flag] = '\0';
    dd = atoi(str);
    for (int i = 1; i <= 12; i++) {
        if (str[3-flag] == monthname[i][0] &&
            str[4-flag] == monthname[i][1] &&
            str[5-flag] == monthname[i][2])
        {
            mm = i;
            break;
        }
    }
    yy = atoi(str + 7-flag);
}

int main()
{
    int day, month, year;
    getDate(day,month,year);
    cout<<" "<<day<<" "<<month<<" "<<year<<endl;
    return 0;
}
