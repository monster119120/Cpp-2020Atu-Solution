//
// Created by azuna on 2020/12/2.
//
#include <cstring>
#include <iostream>
#include "class.h"

using namespace std;

void JosephCircle::Add(int num){
    if(tail == NULL){
        tail = new Node(num);
        tail->next = tail;
    }
    else{
        Node* new_node = new Node(num);
        new_node->next = tail->next;
        tail->next = new_node;
        tail = new_node;
    }
}
void JosephCircle::Eliminate(int step){
    Node* p = tail;
    int flag = 0;
    while(p != NULL && p != p->next){
        for(int i = 0;i < step-1;i++){
            p = p->next;
        }
        Node* eliminate = p->next;
        p->next = eliminate->next;
        if(eliminate == tail){
            tail = p;
        }
//        cout<<"deleting"<<eliminate->data<<endl;
        if (flag==0){
            cout<<eliminate->data;
            flag = 1;
        } else{
            cout<<" "<<eliminate->data;
        }

        delete eliminate;
//        Print();
    }
    cout<<endl;
}
void JosephCircle::Print(){		//这打印还是有点说法的
    Node* cur = tail;
    while(cur != NULL){
        cur = cur->next;
        cout<<cur->data;
        if(cur == tail)
            break;
    }
    cout<<endl;
}