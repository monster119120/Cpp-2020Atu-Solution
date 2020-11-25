#include "class.h"

using namespace std;


PersonScore::PersonScore(string i, string n, int m, int e, int c){
    id = i;    name = n;    math = m;    English = e;  CS = c;
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