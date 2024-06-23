//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
#include <vector>
using namespace std;

double division(int a, int b)
{
    if( b == 0 )
    {
        throw "Division by zero condition!"; //抛出错误
    }
    return (a/b);
}
//25
int main25 ()
{
    int x = 50;
    int y = 0;
    double z = 0;

    try { //异常捕获
        z = division(x, y);
        cout << z << endl;
    }catch (const char* msg) { //打印异常
        cerr << msg << endl;
    }

    return 0;
}

