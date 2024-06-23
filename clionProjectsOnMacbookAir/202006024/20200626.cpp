//
// Created by 蓝一潇 on 2020/6/26.
//
#include  <iostream>
#include  <string>
using  namespace  std;
class ab{
public:
    int a = 1;
private:
    int c = 1;
};

class cd: private ab{
public:
    void getc(){cout<<ab::a;};

};
//77
inline int bc(int b, int c){
    return b+c;
}
//88
int main88(){
    cd CD;
    CD.getc();
    int a = 1;
    int *p=&a;
    cout<<*p<<endl;
}
