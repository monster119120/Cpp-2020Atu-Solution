#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int x = (int)sqrt(a) - 1;
    int sum = 0;
    while (x*x <= b) {
        if (x*x>=a && x*x<=b) sum += x*x;
        x += 1;
    }
    cout<<sum;
    return 0;
}
