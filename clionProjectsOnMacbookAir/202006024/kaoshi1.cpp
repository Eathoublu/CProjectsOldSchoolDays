//
// Created by 蓝一潇 on 2020/6/25.
//
# include<iostream>
using namespace std;
class MyClass{
public:
    MyClass(){cout<<'A';};
    MyClass(char c){cout<<c;};
    ~MyClass(){cout<<'B';};
    void print() const{cout<<"haha"<<endl;};
    static void printhaha(){cout<<"haha"<<endl;};
private:
    int a = 1;

};
template <typename T>
void f(T&x, T&y){
    T temp;
    temp = x;
    x =y;
    y = temp;
}
class MyBase{
private:
    int k;
public:
    MyBase(int n):k(n){};
    int value()const{return k;};
};

class Shape
{
public:
    int c = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
    int b;
private:
    int a = 1;
};

// 派生类
class Rectangle: Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
    int test(){
        return b;
    }
    int test2(int c){
        setWidth(c);
        return c;
    }
    int test3(){
        return c;
    }
};
//void x(int a, int b) throw();
//void x(int a, int b){
//    cout<<"123"<<endl;
//    throw();
//}
//27
int main27(){
//    MyClass p1, *p2; //定义*p2时，不会调用构造函数
//    p2 = new MyClass('X');
//    delete p2;
//    T a=3,b=2;
//    f(3,2);
//    MyClass const p1;
//    p1.print();
//    p1.printhaha();
//    x(1,2);

}