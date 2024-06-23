//
// Created by 蓝一潇 on 2020/6/24.
//
#include <iostream>
#include<stdio.h>
int bin2dec(int a){

}
double power(double x, int n){
    double val = 1.0;
    while (n--){
        val *= x;
    }
    return val;
}
using namespace std;
int main2(){
 int value = 0;
 for (int i=7; i>=0;i--){
     char ch;
     cin >> ch;
     if (ch == '1'){
         value += static_cast<int>(power(2, i));
     }
 }
 cout<<value<<endl;
 return 0;

};
