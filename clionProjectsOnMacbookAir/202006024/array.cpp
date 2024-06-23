//
// Created by 蓝一潇 on 2020/6/25.
//

#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;
//数组作为函数参数,浅拷贝，不想被改，传常函数
int arraysum(int a[][4], int row){ //传数组参数，本质上传的是地址
    int sum = 0;
    for(int i=0;i<row;i++){
        cout<<a[i][3]<<endl;
        sum += a[i][3];
    }
    return sum;
}
class D2{
public:
    D2(int a){}; //如果实例化需要参数，则D2 d[2]={1,2}；不需要参数，则直接D2 d[2]；两个参数似乎暂时不行；
    ~D2(){};
void print(){cout<<"haha"<<endl;};
};

//数组
//12
int main12(){
    int a[10]={0, 1, 2,3,4,5,6,7,8,9};  //a[0]-a[9]; 一位数组，元素元素间，地址连续，一个挨着一个，a存放的就是地址，a不能重新赋值。
//    int b[10] = {1,2,3,4};
//    int c[] = {1,2,3,4,5,6};
//    int d[3][4] = {1,2,3,4};//二维数组，一位数组构成的数组 此处可以写12个
//    int e[][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; //列出全部初始值，第一维可省略，自动推断为3
//    int f[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}; //列出全部初始值才可省略
    D2 d[2]={1,2}; //批量实例化，和前面有冲突？
    D2 *p = d;
    int *pa = a;
    for (int i =0;i<(sizeof(d)/ sizeof(D2));i++){
//        d[i].print(); //批量遍历对象的方法；
        p++->print();

        cout<<*pa++<<endl;
    }

//    cout<<arraysum(f, 3)<<endl;




}