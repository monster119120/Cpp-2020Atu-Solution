#include "class.h"

using namespace std;


PersonScore::PersonScore(char* i, char* n, int m, int e, int c) {
    if (i==NULL){
        char str[] = "00000000";
        strcpy(id, str);
    }
    else {
        strcpy(id, i);
    }


    if(n == NULL) {
        char str[] = "name";
        strcpy(name, str);
    }
    else
    {
        strcpy(name, n);
    }


    math = m;   
    English = e;  
    CS = c;
}

PersonScore::~PersonScore(){
    
}

void PersonScore::GiveValue(
    int m, int e, int c){math = m; English = e;  CS = c;
}

void PersonScore::Display(){
    cout << id << " " << name << " " << math << " " << English << " " << CS << endl;
}

int PersonScore::GetHigh(){
    int h;
    h = math > English ? math : English; h = h > CS ? h : CS;
    return h;
}

int PersonScore::GetLow(){
    int l;
    l = math < English ? math : English; l = l < CS ? l : CS;
    return l;
}

bool PersonScore::isMathPass(){
    if(math>=60)
        return true;
    return false;
}

bool PersonScore::isEnglishPass(){
    if(English>=60) return true; return false;
}

bool PersonScore::isCSPass(){
    if(CS>=60) return true; return false;
}