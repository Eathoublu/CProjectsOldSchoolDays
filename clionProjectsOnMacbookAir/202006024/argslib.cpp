//
// Created by 蓝一潇 on 2020/6/24.
//
#include <iostream>
#include<stdio.h>
using namespace std;

//形式参数为别名 交换函数
void swap(int &a, int &b){
    int t;
    t = a;
    a = b;
    b = t;
}
//内联函数(希望编译器用函数体里面的语句替换函数调用表达式)充分简单
inline int calapb(int a, int b){
    return a+b;
}

//重载（静态多态）
int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}




int main3(){
    int i,j;
    int &bm = i; //别名，bm永远和i绑定在一起的，一般用于引用双向传递

    int a=1, b=2;
    swap(a, b);
    cout<<a;
    cout<<b;
    add((float)1.2, (float)1.0);
    add(1,2);
}
