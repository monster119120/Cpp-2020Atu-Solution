#ifndef CLASS_H
#define CLASS_H
#include <cstring>
#include <iostream>

using namespace std;

class PersonScore
{
public:
    PersonScore(string i="00000000", string n="name", int m=0, int e=0, int c=0);
    void GiveValue(int m, int e, int c);
    void Display();
    int GetHigh();
    int GetLow();
    bool isMathPass();
    bool isEnglishPass();
    bool isCSPass();

private:
    string id;
    string name;
    int math;
    int English;
    int CS;
};



#endif /* CLASS_H */