//
// Created by azuna on 2020/12/2.
//
#include <iostream>
#ifndef UNTITLED3_CLASS_H
#define UNTITLED3_CLASS_H

struct Node{
    int data;
    Node* next;
    Node(int value){this->data = value;};
};

//创建一个约瑟夫环的类
class JosephCircle{
private:
    Node* tail;	//尾结点
    //Node* eliminate;	//淘汰结点
public:
    JosephCircle():tail(NULL){}
    ~JosephCircle(){delete tail;}
    void Add(int num);
    void Eliminate(int step);
    void Print();
};

#endif //UNTITLED3_CLASS_H
