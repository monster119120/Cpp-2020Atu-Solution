#include <iostream>
#include <cstring>
using namespace std;

bool func(char array[ ], int len);

int main() {
    char ch[20];
    bool result;

    cin >> ch;

	//此处填补几行代码
    if(func(ch,strlen(ch))){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}

bool func(char array[ ], int len) {
	//此处填补几行代码
    
    int i=0;
    int flag=0;
    //此处为字符串字符个数的计算，通过计算\0位置
    for(i=0;array[i]!=0;i++);
    for(int j=0;j<i;j++){
        if(array[j]!=array[i-1-j]){
            flag=1;
            return false;
        }
    }
    if(!flag)
        return true;
}