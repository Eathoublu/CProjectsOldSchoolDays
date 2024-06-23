//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;


//指针：地址类型变量 指针运算：*（寻址过程，找到内容值） 地址运算符：&（返回地址） 互为逆运算
//变量类型与指针类型需要一致，不能赋予普通整数；
//null 0 nullptr 空指针
//14
int main14(){
    static int i;
    static int *ptr = &i; //ptr为指向i的指针 ptr存放的int为一个地址，指向i
    void *pv;//可以直接这样声明；
    //将void指针转化为int指针
    int *pint = static_cast<int *>(pv);
    //常量指针
    int a;
    const int *p1 = &a; //p1是指向常量的指针，相当于只读指针
    int b;
    p1 = &b;//可以，p1本身不是常量
//    p1 = 1;//错，不能通过p1改变所指对象
    int *const p2 = &a; //只读指针；值不能改变

    //指针算术运算
    //指针加n：让指针指向前方第n个数据的起始位置
    short s[4] = {1,2,3,4};
    short *ps = s;
    cout<<*ps++<<endl;
    cout<<*ps++<<endl;
    cout<<*ps++<<endl;
    cout<<*ps++<<endl;

    // 1 2 3 4

    //指针可以与0比较判断是否为空指针











}
