//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

//常成员 常函数成员
//常对象
class c{
public:
    c(){};
    void print(){cout<<"print"<<endl;};
    void print() const{cout<<"print const"<<endl;}; //const也是区分重载函数的因素
};

//11
int main11(){
    c const c1;
    c c2;
    c1.print(); //print const;
    c2.print(); //print; 若只有const函数，他也会调用const函数;
}
