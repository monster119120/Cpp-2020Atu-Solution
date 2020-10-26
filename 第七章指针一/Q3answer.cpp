#include <iostream>
using namespace std;
int main()
{
    int n, m=3, i, s = 0;
    
    cin>>n;
    for (i = 2; i <= n; i++)
    {
        s = (s + m) % i;
    }
    cout<<s+1<<endl;
}