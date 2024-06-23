#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;
enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7};
class CPU
{
private :
      CPU_Rank rank;
      int frequency;
      float voltage;
      public:
      int frequency2 ;
      CPU(CPU_Rank r, int f ,float v){
        this->rank = r;
        this->frequency=f;
        this->voltage=v;
        cout<<"构造了一个CPU!"<<endl;
      }
    CPU_Rank GetRank() const { return rank; }
    int GetFrequency() const { return rank; }
    float GetVoltage() const {	return voltage; }
    void SetRank(CPU_Rank r) { rank=r; }
    int SetFrequency(int f) { frequency=f;printf("f2=%d\n",frequency);
        return frequency;}
    void Setvoltage(float v) { voltage=v; }
    void Run(){ cout<<"CPU 开始运行!"<<endl; }
    void Stop(){ cout<<"CPU 停止运行!"<<endl; }
    ~CPU() { cout<<"析构了一个CPU!"<<endl; }
};

int main() {
    CPU a(P6,300,2.8);
    a.Run();
    a.Stop();
    int v = a.GetVoltage();
    cout<<"v="<<v<<endl;
    int f23 = a.SetFrequency(100);
    cout<<"f1="<<f23<<endl;
    CPU_Rank rank;
    rank = a.GetRank();
    cout<<rank<<endl;
    cout<< a.frequency2<<endl;
    cout<<CPU_Rank(P3)<<endl;


//析构函数会在程序执行完之后，对象销毁的时候调用。
    //私有变量不可以直接访问但是可以通过成员函数调用，从而return这个变量的值。用a.function（）





    std::cout << "Hello, World!" << std::endl;
    return 0;
}