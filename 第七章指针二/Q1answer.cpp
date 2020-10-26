#include <iostream>
#include <cstring>
using namespace std;

bool func(char array[ ], int len);

int main() {
    char ch[20];
    bool result;

    cin >> ch;

	//此处填补几行代码
    if(func(ch,strlen(ch))) cout<<"Yes";
    else cout<<"No";

    return 0;
}

bool func(char array[ ], int len) {
	//此处填补几行代码
    if(len<=1) return true;
    if (array[0]==array[len-1]) return func(array+1,len-2);
    else return false;
}