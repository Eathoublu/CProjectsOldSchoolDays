//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

//作用域：形式参数括号、局部作用域（整个函数中）、if语句的局部作用域、类作用域（在整个类体、类外成员函数）、文件作用域（起始于生命点结束语关闭点）
//内层作用域生成与外层同名标志，外层在内层就不可用了

class p{
public:
    static int count; //静态成员变量
    p(){
        count++; //若有复制构造，也要加一
    }
    ~p(){
        count--;
    }
};
int p::count=0; //对实例化的对象个数进行计数；

//7
int main7(){
    p p1,p2;
    cout<<p1.count<<endl;
    cout<<p2.count<<endl;
}
