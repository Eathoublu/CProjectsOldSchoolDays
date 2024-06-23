//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

struct stest{ //结构体，默认公有，是一种特殊的类
    int num;
    string a;

protected:
    int b=1;
private:
    int c=1;
};

union utest{ //每一个时间只能选择其中一个变量 占用空间：最多字节数的那个成员
    int num;
    int grade;
    int haha;
};

//union { //共用内存空间
//    int i;
//    float f;
//};


enum class WEEKDAY {MONDAY, TUESDAY, WENDSDAY};
enum class WEEK:char{A, B, C, D};

int main6(){
    int i = 1;
    float f = 2;
    WEEKDAY a = WEEKDAY::TUESDAY; //两个不同枚举类不能直接比较大小（类型不同）
    cout<<(int)a<<endl;


//    i = 2; //union打开后，这样会报错，f赋值之后，i随即失效。
//    cout<<i<<endl; //union打开后，这样会报错，f赋值之后，i随即失效。
}






