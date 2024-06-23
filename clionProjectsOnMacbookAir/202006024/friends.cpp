//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

//友元破坏封装和引用，有权限访问似有数据,方便开发

//友元函数
class point{
public:
    point(int x, int y){
        this->a = x;
        this->b = y;

    }
    friend float dist(point &a, point &b); //若加上const，变为常引用，则下面dist也要在point前面加const，则只可以取不可以改

private:
    int a;
    int b;
};

float dist(point &a, point &b){
    return a.a+b.b;
};
//9
int main9(){
    point p1(1,2), p2(3,4);
    cout<<dist(p1, p2)<<endl;
}