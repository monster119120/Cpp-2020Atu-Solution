#include <iostream>
using namespace std;

int main()
{
    char str1[20];
    char str2[20];

    cin >> str1;
    cin >> str2;

    /*Start your code here*/


    char *i=str1;
    while (*i != '\0' && *(str2+(i-str1)) != '\0') {
        
        char tmp = *i;
        *i = *(str2+(i-str1));
        *(str2+(i-str1)) =tmp;
        i++;
    }
    
    cout << str1 << endl;
    cout << str2 << endl;

    /*end your code*/
    return 0;
}