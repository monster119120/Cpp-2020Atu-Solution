#include <iostream>
using namespace std;

int main()
{
    char str1[20];
    char str2[20];

    cin >> str1;
    cin >> str2;

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        
        char tmp = str1[i];
        str1[i] = str2[i];
        str2[i] = tmp;
        i++;
    }
    
    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}
