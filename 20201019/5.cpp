#include <iostream>
#include<iomanip>
#include<typeinfo>
using namespace std;

int main()
{
    int a=0, b=0, c=1;
    cin >> a >> b;

    c = a % b;
    while(c>0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    cout << b;
    return 0;
}