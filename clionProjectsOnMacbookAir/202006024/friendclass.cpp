//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;
class A{ //A加入申明后，B可以访问A
    friend class B;

private:
    int x=0;
};

class B{
private:
    A a;
public:
    void seta(){
        a.x = 1; //可以取得a的隐私数据
    }
    void printx(){
        cout<<a.x<<endl;
    }


};
// 10
int main10(){
    B b;
    b.seta();
    b.printx();

}
