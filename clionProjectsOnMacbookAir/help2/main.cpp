#include "iostream"
using namespace std;
class myPoint{
public:
    myPoint(float a, float b){
        cout<<"调用myPoint构造函数"<<endl;
        x = a;
        y = b;
    };
    ~myPoint(){cout<<"调用myPoint析构函数"<<endl;};
    float getX(){return x;};   //读取坐标x
    float getY(){return y;};   //读取坐标y
    void show(){};  //例如：x=5,y=3时，输出：(5,3)
private:
float x;
float y;};


class myLine{
public:
    myLine(float a, float b, float c, float d){
        cout << "调用myLine构造函数" << endl;
        p1_x = a;
        p1_y = b;
        p2_x = c;
        p2_y = d;
    };
    ~myLine() { cout << "调用myLine析构函数" << endl; }

    void show(){
        myPoint p1(p1_x, p1_y), p2(p2_x, p2_y);
        float dx = p1.getX() - p2.getX();
        cout<<"("<<p1.getX()<<","<<p1.getY()<<")("<<p2.getX()<<","<<p2.getY()<<")";
        if (dx==0){
            cout<<"垂直于x轴"<<endl;
        }else{
            cout<<"斜率："<<((p2.getY()-p1.getX())/dx)<<endl;
        }


    };

private:
    float p1_x, p1_y, p2_x, p2_y;
 //   myPoint p1(), p2();
};


int main()
{
    myLine a[]={myLine(1,2,5,4),myLine(2,5,2,6),myLine(5,4,3,7)};
    for(int i=0;i<3;i++){
        a[i].show();}
    cout<<endl;
}