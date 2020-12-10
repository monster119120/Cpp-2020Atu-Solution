//
// Created by azuna on 2020/12/2.
//
#include <cstring>
#include <stdlib.h>
#include <iostream>
#include "class.h"

int RomanWithInt::GetRomanValue(char ch)
{ /*字串数值对照表*/
    switch(ch)
    {
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
        default:return 0;
    }
}

int RomanWithInt::CheckRight(char ch1,char ch2)
{ /*检查两罗马字符大小*/
    return (GetRomanValue(ch1)>= GetRomanValue(ch2));
}

int RomanWithInt::RomanNumToDex(char *str)
{
    int r = 0;
    char *string = str;
    while(*string != 0)
    {
        if(*(string+1) != 0)
        {
            if(!CheckRight(*string,*(string+1)))
            {/*如果次序不同,进行减法运算*/
                r += GetRomanValue(*(string+1))-GetRomanValue(*string);
                string += 2;
                continue;
            }
        }
        r += GetRomanValue(*string++);
    }
    return r;
}

/*十进制数转罗马字串*/
/*num:十进制数,rom:目标ROMAN串储放地址*/
void RomanWithInt::DexToRomanNum(int num)
{
    char * ret = NULL;
    if (num <= 0 || num > 3999) return;
    ret = (char *) malloc (sizeof(char) * 16);
    if (ret == NULL) {
        printf("申请内存出错");
        exit(0);
    }
    ret[15] = 0; // memset(ret, 0, 16);

    char Rome[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    char i = 14, j = 0, m = 0;

    while(num) {
        m = num % 10;
        num /= 10;
        while (1) {
            if (m == 9) {ret[i--] = Rome[j+2]; m = 1;}
            else if (m == 8) {ret[i--] = Rome[j]; m--;}
            else if (m == 7) {ret[i--] = Rome[j]; m--;}
            else if (m == 6) {ret[i--] = Rome[j]; m--;}
            else if (m == 5) {ret[i--] = Rome[j+1]; break;}
            else if (m == 4) {ret[i--] = Rome[j+1]; m=1;}
            else if (m == 3) {ret[i--] = Rome[j]; m--;}
            else if (m == 2) {ret[i--] = Rome[j]; m--;}
            else if (m == 1) {ret[i--] = Rome[j]; break;}
            else break;
        }
        j += 2;
    }
    
    std::cout<<(ret + i + 1)<<std::endl;
}


void RomanWithInt::transfer(char* src_str) {
    if (src_str[0]>='0' && src_str[0] <= '9'){
        DexToRomanNum(atoi(src_str));
    }else{
        std::cout<<RomanNumToDex(src_str)<<std::endl;
    }
}

RomanWithInt::RomanWithInt() {

}
