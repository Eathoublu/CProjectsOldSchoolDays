
//
// Created by 蓝一潇 on 2018/4/23.
//
/*
#include "iostream"
using namespace std;

class vehicle{
public:
    int maxspeed = 1;
    int weight;
};

class bycycle:virtual public vehicle{
public:
    int hight;
 //   int maxspeed = 3;

};
//如果去掉virtual，将会导致出错，因为会出现二义性错误。 使用virtual可以防止两个父类之中拥有相同名字的成员时发生的二义性冲突。
class motorcar:virtual public vehicle{
public:
    int seatnum = 1;
    int maxspeed = 2;
};

class motorbike:public bycycle,public motorcar{
public:
    int d;
};


int main(){
    motorbike a;
    cout<<a.maxspeed<<endl;
    cout<<a.seatnum<<endl;

}
*/