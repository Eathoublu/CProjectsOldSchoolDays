#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
class point_2{
public:
    double x,y;double dis;
    point_2(double a,double b){
      x=a;
      y=b;
    }
    ~point_2(){}
    void getDis();
    void showpos();
};
void point_2::getDis(){

  dis=sqrt(x*x+y*y);
}
void point_2::showpos(){
      cout<<fixed<<setprecision(2)<<dis<<endl;
      cout<<fixed<<setprecision(2)<<x<<" "<<fixed<<setprecision(2)<<y<<endl;
    }


class point_3{
private:
     double x,y;
    double z;
    double dis;
public:
    point_3(double a,double b,double c){
      x=a;
      y=b;
      z=c;
    }
    ~point_3(){}
    void getDis();
    void showpos();
};
void point_3::getDis(){
  dis=sqrt(x*x+y*y+z*z);
}
void point_3::showpos(){
      cout<<fixed<<setprecision(2)<<dis<<endl;
      cout<<fixed<<setprecision(2)<<x<<" "<<fixed<<setprecision(2)<<y<<" "<<fixed<<setprecision(2)<<z<<endl;
    }

int main(){
  double X,Y;
  cin>>X>>Y;
 double x,y,z;
  cin>>x>>y>>z;
  point_2 a(X,Y);
  a.getDis();
  a.showpos();
  point_3 b(x,y,z);
  b.getDis();
  b.showpos();
  return 0;

}