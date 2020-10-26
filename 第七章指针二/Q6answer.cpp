#include <iostream>
#include <cstring>
using namespace std;

char *julian(int year,int day)
{
    int i,day_1;
    bool flag=false;
    char* str[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int month_days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
        flag=true;
    if(day>365+flag)
        return NULL;
    char* daystr=new char[7];
    if(flag)
        month_days[1]++;
    for(i=0;i<12 && day>0;i++)
        day-=month_days[i];
    i--;
    strcpy(daystr,str[i]);
    day+=month_days[i];
    day_1=day/10;
    day=day%10;
    daystr[3]=' ';
    daystr[4]='0'+day_1;
    daystr[5]='0'+day;
    daystr[6]='\0';
    return daystr;
}
int main()
{
    int year,day;
    char* res;
    cin>>year>>day;
    res=julian(year,day);
    cout<<res<<endl;
    delete []res;
    return 0;
}