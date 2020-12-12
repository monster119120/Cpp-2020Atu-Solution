#include "class.h"


student::student(const char *n, int yy, int mm, int dd):birthday(yy,mm,dd),coursenum(0) {
    strcpy(name, n);
}

student::student(const char *n, const date &d):birthday(d.year, d.month, d.day), coursenum(0) {
    strcpy(name, n);
}

void student::inputscore(const char *c, int d) {
    data[coursenum].setcourse(c);
    data[coursenum].setvalue(d);
    coursenum += 1;
}

double student::avg() const {
    double avg = 0.0;
    for (int i=0; i<coursenum; i++){
        avg += data[i].getvalue();
    }
    return avg;
}


void date::print() {
    char dateYMD[9];
    if (year >= 10){
        dateYMD[0] = '1';
        dateYMD[1] = '0' + year%10;
    } else{
        dateYMD[0] = '0';
        dateYMD[1] = '0' + year;
    }

    if (month >= 10){
        dateYMD[3] = '1';
        dateYMD[4] = '0' + month%10;
    } else{
        dateYMD[3] = '0';
        dateYMD[4] = '0' + month;
    }

    if (day >= 10){
        dateYMD[6] = '1';
        dateYMD[7] = '0' + day%10;
    } else{
        dateYMD[6] = '0';
        dateYMD[7] = '0' + day;
    }

    dateYMD[2] = dateYMD[5] = '-';
    dateYMD[8] = '\0';

    cout<<dateYMD<<endl;
}

void score::print() {
    cout<<"Course name: "<<course<<", score is: "<<value<<endl;
}

void student::print() {
    cout<<"Student name: "<<name<<endl;
    cout<<"Student birthday: ";
    birthday.print();
    cout<<endl;
    cout<<"Totally "<<coursenum<<" courses scores."<<endl;

    for (int i=0; i<coursenum; i++){
        data[i].print();
    }
}