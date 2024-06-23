//
// Created by 蓝一潇 on 2020/6/25.
//
#include  <iostream>
using  namespace  std;

//class Pet{
//public:
//    int length;
//    int age;
////    Pet(int a, int b){length=b; age=a;};
//    ~Pet(){};
//    void display(){
//        cout<<length<<' '<<age<<endl;
//    }
//    virtual void shout();
//};
//
//class Cat: public Pet{
//public:
//    Cat(int a, int b){this->length=b; this->age=a;};
//void shout() {cout<<"Miao Miao"<<endl;};
//};
//
//class Dog: public Pet{
//public:
//    Dog(int a, int b){this->length=b; this->age=a;};
//    void shout() {cout<<"Wang Wang"<<endl;};
//};

// 基类

class Pet
{
public:

    virtual void shout()=0;
    void display(){
        cout<<age<<" "<<length<<endl;
    }
protected:
    int age;
    int length;
};


class Cat: public Pet
{
public:
    Cat(int a, int b){this->age=a;this->length=b;};
    void shout() //完善父类的同名纯虚函数
    {
       cout<<"Miao Miao"<<endl;

    }
};
class Dog: public Pet
{
public:
    Dog(int a, int b){this->age=a;this->length=b;};
    void shout()
    {
       cout<<"Wang Wang"<<endl;
    }
};

//30
int  main30()
{
    Pet*  p;
    p=new  Cat(5,2);
    p->shout();
    delete  p;
    p=new  Dog(6,1);
    p->shout();
    delete  p;
    return  0;
}
