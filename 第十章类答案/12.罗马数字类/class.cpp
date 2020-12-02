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
    char rom[80];
    int cont,i,r = num;
    char *offset = rom;
    if(cont=r/1000) { /*从最大起,求出个数*/
        memset(offset,'M',cont);
        offset += cont;
        r = r%1000; /*用余数再计算下一级*/
    }
    /*以下方法同上*/
    if(cont=r/500)  {
        if(i=cont>>2)  {
            while(i>0) {/*超过四个就按the Subtraction Law进行转换*/
                memcpy(offset,"DM",2);
                offset += 2;
                i--;
            }
            cont = cont%4;
        }
        memset(offset,'D',cont);
        offset += cont;
        r = r%500;
    }
    if(cont=r/100)  {
        if(i=cont>>2)   {
            while(i>0) {
                memcpy(offset,"CD",2);
                offset += 2;
                i--;
            }
            cont = cont%4;
        }
        memset(offset,'C',cont);
        offset += cont;
        r = r%100;
    }
    if(cont=r/50) {
        if(i=cont>>2) {
            while(i>0)  {
                memcpy(offset,"LC",2);
                offset += 2;
                i--;
            }
            cont = cont%4;
        }
        memset(offset,'L',cont);
        offset += cont;
        r = r%50;
    }
    if(cont=r/10) {
        if(i=cont>>2)   {
            while(i>0)     {
                memcpy(offset,"XL",2);
                offset += 2;
                i--;
            }
            cont = cont%4;
        }
        memset(offset,'X',cont);
        offset += cont;
        r = r%10;
    }
    if(cont=r/5)  {
        if(i=cont>>2)  {
            while(i>0)    {
                memcpy(offset,"VX",2);
                offset += 2;
                i--;
            }
            cont = cont%4;
        }
        memset(offset,'V',cont);
        offset += cont;
        r = r%5;
    }
    if(r) {
        if(i=r/4) {
            while(i>0) {
                memcpy(offset,"IV",2);
                offset += 2;
                i--;
            }
            r = r-4;
        }
        memset(offset,'I',r);
        offset += r;
    }
    *offset = '\0';
    std::cout<<rom<<std::endl;
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
