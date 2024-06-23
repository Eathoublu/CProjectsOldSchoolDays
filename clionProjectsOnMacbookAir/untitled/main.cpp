//#include <iostream>
//using namespace std;
//int main() {
//    std::cout << "**************************" << std::endl;
//    std::cout <<"         Very    Good!"<<endl;
//    std::cout << "**************************" << std::endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//    int a,b,c;
//    cin >> a >> b >> c;
//    cout <<a << b <<c;
//   if (a>b&&a>c){
//      cout<<a<<endl;
//   } else if(b>c){
//       cout<<b<<endl;
//   } else if(c>b){
//       cout<<c<<endl;
//   }
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <string.h>
//using namespace std;
//int main() {
//    int i;
//    char a[100] = {0};
//    cin.get(a,100);
////    cout<<a<<endl;
//    for(i = 0 ; i<=strlen(a)-1;i++){
////      cout<<char(a[i]+5)<<endl;
//        a[i] = char(a[i]+4);
//    }
//    cout<<a<<endl;
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <string.h>
//#include<iomanip>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//int main() {
//    float F,c;
//    cin>>F;
//    c = 5*(F-32)/9.0;
////    cout << setprecision (4); // 精度
//    cout.setf(ios::fixed,ios::floatfield); // 定点格式
////    cout << setprecision(2);
//    cout<<"c=";
//    cout<<setprecision(2)<<c<<endl;
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <string.h>
//#include<iomanip>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//int main() {
//    int x;
//    cin>>x;
//    if(x<1){
//        cout<<x<<endl;
//    }else if(x>=10){
//        cout<<(3*x-11)<<endl;
//    }else{
//        cout<<(2*x-1)<<endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <string.h>
//#include<iomanip>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//int main() {
//    char a[7]={0};
//    int i;
//    cin.get(a,6);
//    cout<<strlen(a)<<endl;
//    for(i = 0;i<=strlen(a)-1;i++){
//        if(i == strlen(a)-1){
//            cout<<a[i]<<endl;
//            break;
//        }
//        cout<<a[i]<<' ';
//    }
//
//    for(i = strlen(a)-1;i>=0;i--){
//        cout<<a[i];
//    }
//    cout<<endl;
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <string.h>
//#include<iomanip>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//int main() {
//    int n,i,er=2,sum=2;
//    cin>>n;
//    for(i=1;i<n;i++){
//        er*=10;
//        er+=2;
//        sum+=er;
//    }
//    cout<<sum<<endl;
//
//    return 0;
//}
//
//#include<stdio.h>
//int findGYS(int m,int n){
//    int r;
//    r = m % n;
//    if(r == 0){
//        return n;
//    }else{
//        return findGYS(n,r);
//    }
//}
//int findGBS(int m ,int n){
//    int r;
//    for(r = 1;r<=m*n;r++){
//        if((r%m==0)&&(r%n==0)){
//            return r;
//        }
//    }
//    return 0;
//}
//int main(){
//    int m,n;
//    scanf("%d %d",&m,&n);
//    printf("%d ",m>n? findGYS(m,n):findGYS(n,m));
//    printf("%d\n",findGBS(m,n));
//    return 0;
//}

//#include "iostream"
//#include "string"
//#include "cmath"
//#include <fstream>
////#include <stdlib.h>
//#include <cstdio>
//using namespace std;
////class Student{
////public:
////    Student(string xid,string xname,int xscore):id(xid),name(xname),score(xscore){
////        classSize++;
////        sumscore+=score;
////    }
////    int getNum(){return classSize;}
////    int getAverage(){return floor((double)sumscore/classSize+0.5);}
////private:
////    string id;
////    string name;
////    int score;
////    static int classSize;
////    static int sumscore;
////};
////int StudentclassSize=0;
////int Studentsumscore=0;
//int main()
//{
//    int i;
//    char xid[100];
//    char xname[100];
//    int xscore;
//    string s;
////    scanf("%s",xid);
////    printf("%s",xid);
////    ifstream ifin("/Users/eathoublu/CLionProjects/untitled/1.txt");
//
////    if(!ifin.is_open()){
//       cout<<"wrong"<<endl;
// //   }
//    while(scanf("%s %s " , &xid)!=EOF){
////        ifin.getline(s,100);
//        cout << xid << endl;
////        cin>>xid>>xname>>xscore;
//        Student information(xid,xname,xscore);
//        cout<<information.getNum() <<" "<< information.getAverage()<<endl;
//    }
//    cout<<"1";
// //   cout<<information.getNum()<<information.getAverage()<<endl;
//    cin>>xid>>xname>>xscore;
//    Student information(xid,xname,xscore);
//
//    return 0;
//}


#include <iostream>
#include <cstdio>
using namespace std;
//class MyComplex{
//public:
//    MyComplex(int xshi1,int xxue1,int xshi2,int xxue2){
//        shi1=xshi1;
//        xue1=xxue1;
//        shi2=xshi2;
//        xue2=xxue2;
//    }
//    void myAdd();
//    void myMinus();
//private:
//    int shi1;
//    int xue1;
//    int shi2;
//    int xue2;
//};
//void MyComplex::myAdd()
//{
//    cout<<shi1+shi2;
//    if((xue1+xue2)>0)
//        cout<<"+"<<xue1+xue2<<"i"<<endl;
//    else cout<<xue1+xue2<<"i"<<endl;
//}
//void MyComplex::myMinus()
//{
//    cout<<shi1-shi2;
//    if((xue1-xue2)>0)
//        cout<<"+"<<xue1-xue2<<"i"<<endl;
//    else cout<<xue1-xue2<<"i"<<endl;
//}
int main()
{
//    char a[100],b[100],x[100],y[100];
//    while(scanf("%s %s %s %s",&a,&b,&x,&y)!=EOF)
//    {
//        cout<<a<<endl;
////        MyComplex A(a,b,x,y);
////        A.myAdd();
////        A.myMinus();
//    }
    int  i,j,m;
    int a[] = { 0 };
    int b[] = { 0 };
    int c[] = { 0 };
    int x[100] = { 0 };
    scanf("%d", &i);

    for (j = 0; j < i; j++)
    {
        scanf("%d %d %d", &a[j], &b[j], &c[j]);
        x = (4 * b[j] - c[j] + 2 * a[j]) / 4;
        x[j] = m;
    }
    for (j=0;j<i;j++)
        printf("%d\n", x[j]);
    return 0;
}
    return 0;
}