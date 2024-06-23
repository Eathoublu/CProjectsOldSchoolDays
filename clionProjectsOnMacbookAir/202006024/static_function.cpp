//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

//静态函数成员,不共享类成员变量
class staticfuntest{
public:
    static void printhaha(){
        cout<<"haha"<<endl;
    }
};
//8
int main8(){
    staticfuntest sft;
    sft.printhaha();
}
