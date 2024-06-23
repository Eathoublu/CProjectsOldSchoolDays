//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

//基于范围的for循环 c11

//基本的遍历：
//13
int main13(){
    int array[3] = {1,2,3};
    int *p;
    for (p=array;p<array+sizeof(array)/ sizeof(int);++p){ //数组长度/每个元素的长度=数组元素数
//        *p += sizeof(int);
        *p += 2; //每个数组元素加2
        cout<<*p<<endl;
    }
    for (int i;i<3;i++){
        cout<<array[i]<<endl;
    }
}

