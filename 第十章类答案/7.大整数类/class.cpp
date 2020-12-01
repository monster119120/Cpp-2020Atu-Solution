#include "class.h"
#include <iostream>
#include <cstring>
using namespace std;


void bigInt::read() {
    char str[1000];
    cin>>str;

    first_index = strlen(str)-1;

    for (int i=strlen(str) - 1;i>=0;i--){
        num[first_index - i] = str[i] - '0';
    }
}

bigInt::bigInt() {
    first_index = -1;
    for (int i = 0; i < 1000; ++i) {
        num[i] = 0;
    }
}

bigInt sum(bigInt big1, bigInt big2) {
    bigInt res;

    int num1_total = big1.first_index;
    int num2_total = big2.first_index;

    int carry = 0;
    int count = 0;
    while (count<=num1_total || count <= num2_total){
        int num1 = 0;
        int num2 = 0;
        if (count <=num1_total )
            num1 = big1.num[count];

        if (count <=num2_total )
            num2 = big2.num[count];


        res.num[count] = (carry + num1 + num2)%10;
        carry = (carry + num1 + num2)/10;
        count++;
        res.first_index++;
    }
    if (carry>0)
        res.num[++res.first_index] = 1;

    return res;
}

void bigInt::show() {
    for (int i = first_index; i >=0 ; i--) {
        cout<<num[i];
    }
    cout<<endl;
}
