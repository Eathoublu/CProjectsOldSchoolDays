//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
#include<stdio.h>
using namespace std;

//抽象(数据抽象、代码抽象)封装 继承 多态

class line;//前向引用申明，不能用他的细节，只能用他的符号,不能用他来实例化

class foo{
private:
    int b;
public:
    int a=0;
    foo(int a):a(a){ //构造函数,不能有return，可重载，可内联,可缺省
        cout<<"haha";
        this->a = a;
    };
    void setText(int a){ //形式参数与成员变量同名，同this->区分。
        this->a = a;
    }
    ~foo(){ //析构函数,可缺省
        cout<<"heihei";
    };
    foo(const foo &f){ //构造一个临时无名对象 复制构造方法
        a = f.a;
        cout<<"复制构造"<<endl;
    }
    int fee();





};
int foo::fee() {
    cout<<"nihao"<<endl;
}

//组合类
class line{
public:
    line(foo foo2):foo1(foo2){ //引入组合类
        cout<<"foo2 "<< foo2.a<<endl;
        this->foo1 = foo2;
        cout<<"foo1 "<< this->foo1.a<<endl;
    }
private:
    foo foo1;
};

class Line{
public:
    Line(foo f1, foo f2){
       cout<<f1.a<<endl;
       cout<<f2.a<<endl;
    }

};

foo func(){
    foo a(10);
    return a;
}


int main5(){
//    foo foo1(2);
//    foo foo2(foo1); //复制构造；
//    cout<<foo2.a<<endl;

    foo b(0);
    foo c(1);
    foo d(b);
//    b = func();
//    line line1(b); //引入组合类，在传入b时，会首先进入复制构造函数，复制一个b。
    Line Line1(b,c); //成功传入两个foo类，并获取其值。
    foo a[2]={1,2};
//    delete[] a;

}

