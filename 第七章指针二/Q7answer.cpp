#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char buf[30][30];
    int n;
    char ch;
    cin >> n;
    /*Start your code here*/
    for (int i = 0; i < n; i++) {
        cin.getline(buf[i],80);
    }
    cin >> ch;
    for (int i = 0; i < n; i++) {
        char* str1 = buf[i];
        while (*str1 != '\0') {
            int flag = 0;
                if (*str1 == ch) {
                    for (int i = 1; str1[i - 1] != '\0'; i++) {
                        flag = 1;
                        str1[i - 1] = str1[i];
                    }
                }
            
            if (flag == 0)
                str1 += 1;
        }
        
    }
    
    char t[100];
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(buf[i], buf[j]) < 0) {
                strcpy(t, buf[i]);
                strcpy(buf[i], buf[j]);
                strcpy(buf[j], t);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << buf[i] << endl;;
    }
    
    /*end your code*/
    return 0;
}
