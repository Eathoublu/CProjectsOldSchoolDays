//
// Created by 蓝一潇 on 2020/6/25.
//

#include  <iostream>
using  namespace  std;
template <typename T>
T max_3(T x, T y, T z){
  if ((x>y) && (x>z)){
      return x;
  }
  if ((y>x) &&(y>z)){
      return y;
  }
  return z;
};




int  main55()
{
    int  a=3,b=4,c=5,m;
    m=max_3(a,b,c);
    cout<<"The  max  value  of  "<<a<<",  "<<b<<"  and  "<<c<<"  is  "<<m<<endl;
    double  d=5.3,e=2.9,f=7.8,n;
    n=max_3(d,e,f);
    cout<<"The  max  value  of  "<<d<<",  "<<e<<"  and  "<<f<<"  is  "<<n<<endl;
    char  c1='b',c2='W',c3='6',c4;
    c4=max_3(c1,c2,c3);
    cout<<"The  max  value  of  '"<<c1<<"',  '"<<c2<<"'  and  '"<<c3<<"'  is  '"<<c4<<"'"<<endl;
    return  0;
}