#include <iostream>

class A{
public:
    int b = 0;
    A(){};
    void print(){std::cout<<b<<std::endl;}
};
extern "C"{
A a;
void print(){
    a.print();
}
}
