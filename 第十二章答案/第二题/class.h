#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <cstring>

using namespace std;


class date {
private:
    int year;
    int month;
    int day;
public:
    date(int y = 0, int m = 0, int d = 0) : year(y), month(m), day(d) { }
    void print();
    friend class student;
};


class score {
private:
    char course[20];
    int value;
public:
    score() {
        course[0] = '\0';
        value = 0;
    }
    void setcourse(const char *c) {  strcpy(course, c);   }
    void setvalue(int v) {value = v; }
    int getvalue() const {return value; }
    void print();
};


class student {
private:
    static const int MAX = 100 ;
    char  name[20];
    date  birthday;
    int coursenum;
    score data[MAX];
public:
    student(const char *n, int yy, int mm ,int dd);
    student(const char *n, const date &d);

    void inputscore(const char *c, int d);       // 添加成绩
    double avg() const;                          // 返回平均成绩
    void print();
};


#endif //CLASS_H
