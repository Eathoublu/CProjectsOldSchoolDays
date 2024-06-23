//////
////// Created by 蓝一潇 on 2018/5/11.
//////
//////# include<iostream>
//////# include "cstdio"
//////int main(){
//////    int i = 100;
//////    int a;
//////    a = i;
//////    for()
//////    printf("%d fvefv %d \n",a,i);
//////    return 0;
//////}
////
//////#include <iostream>
//////#include <iomanip>
//////#include <math.h>
//////using namespace std;
//////class point_2{
//////public:
//////    double x,y;double dis;
//////    point_2(double a,double b){
//////        x=a;
//////        y=b;
//////    }
//////    ~point_2(){}
//////    void getDis();
//////    void showpos();
//////};
//////void point_2::getDis(){
//////
//////    dis=sqrt(x*x+y*y);
//////    cout<<"2d:"<<dis<<endl;
//////}
//////void point_2::showpos(){
//////    cout<<fixed<<setprecision(2)<<dis<<endl;
//////    cout<<fixed<<setprecision(2)<<x<<" "<<fixed<<setprecision(2)<<y<<endl;
//////}
//////
//////
//////class point_3{
//////private:
//////    double x,y;
//////    double z;
//////    double dis;
//////public:
//////    point_3(double a,double b,double c){
//////        x=a;
//////        y=b;
//////        z=c;
//////    }
//////    ~point_3(){}
//////    void getDis();
//////    void showpos();
//////};
//////void point_3::getDis(){
//////    dis=sqrt(x*x+y*y+z*z);
//////    cout<<"3d:"<<dis<<endl;
//////}
//////void point_3::showpos(){
//////    cout<<fixed<<setprecision(2)<<dis<<endl;
//////    cout<<fixed<<setprecision(2)<<x<<" "<<fixed<<setprecision(2)<<y<<" "<<fixed<<setprecision(2)<<z<<endl;
//////}
//////
//////int main(){
//////    double X,Y;
//////    cin>>X>>Y;
//////    double x,y,z;
//////    cin>>x>>y>>z;
//////    point_2 a(X,Y);
//////    a.getDis();
//////    a.showpos();
//////    point_3 b(x,y,z);
//////    b.getDis();
//////    b.showpos();
//////    return 0;
//////
//////}
//////
//////#include "iostream"
//////using namespace std;
//////class A{
//////public:
//////    A(){cout<<"a"<<endl;};
//////};
//////class B: public A{
//////public:
//////    B(){cout<<"a"<<endl;};
//////};
//////int main(){
//////    A a;
//////    B p;
//////    p = a;
//////    return 0;
//////}
////
////
////#include <iostream>
////#include <string>
////#include <fstream>
////#include <sstream>
////#include <stdlib.h>
//////#include<conio.h>
////using namespace std;
////ofstream out;
////ifstream in;
////int i=0;
////void ouser(int which);
////void FIRST();
////void deleteaori();
////void changepassword();
////void ShowList();
////void setOrdinary();
////void firstsetOrdinary();
////void before();
////void auser();
////class User{
////private:
////    string name;
////    string password;
////public:
////    User(){}
////    User(string name,string password):name(name),password(password){}
////    ~User(){}
////    void setname(string n){name=n;}
////    void setpassword(string p){password=p;}
////    string getname(){return name;}
////    string getpassword(){return password;}
////    int login(string n,string p);
////    void change(string newpassword);
////};
////
////void User::change(string newpassword){
////    password=newpassword;
////}                     //修改密码
////class Ordinary:public User{
////public:
////    Ordinary(){}
////    Ordinary(string name,string password)
////    {setname(name);
////        setpassword(password);
////    }
////    ~Ordinary(){}
////    void SettleOrdinary(string n,string p){
////        setname(n);
////        setpassword(p);}
////    int login(string n,string p){
////        if(getname()==n)
////        {
////            if(getpassword()==p) return 1;
////            else return 2;
////        }
////    }
////};
////
////class Admin:public User{
////public:
////    Admin():User("admin","000000"){}
////    Admin(string name,string password)
////    {setname(name);
////        setpassword(password);
////    }
////    ~Admin(){}
////    int login(string n,string p){
////        if(n=="admin"){
////            if(p=="000000") return 4;
////            else return 5;
////        }
////    }
////};
////Ordinary olist[10];
////void firstsetOrdinary(){
////    string OrdinaryName;
////    string OrdinaryPassword;
////    int cl;
////    cout<<"请输入想要注册的用户名："<<endl;
////    cin>>OrdinaryName;
////    do{cout<<"请输入您的密码（不要超过20位）："<<endl;
////        cin>>OrdinaryPassword;
////        cout<<"您的密码为"<<OrdinaryPassword<<",是否更改(确定则输入数字1，重新设置请输入数字2)"<<endl;
////        cin>>cl;
////        if((cl!=1)&&(cl!=2)) {cout<<"您的操作似乎有误！将返回菜单";
////            system("pause");
////            system("cls");
////            before();
////        }
////    }while(cl==2);
////    olist[i].SettleOrdinary(OrdinaryName,OrdinaryPassword);
////    i++;
////    cout<<"设置完毕"<<endl;
////    system("pause");
////    system("cls");
////    before();
////}                  //初次设置用户
////void setOrdinary(){
////    string Orname;
////    string Orpassword;
////    int cs;
////    int p;
////    do{
////        cout<<"请输入想要注册的用户名："<<endl;
////        cin>>Orname;
////        p=0;
////        for(int m=0;m<=i;m++){
////            if(Orname==olist[m].getname())   p++;
////        }
////        if(p!=0) {cout<<"对不起，您的用户名与他人重复，请重新输入！"<<endl;
////            system("pause");
////            system("cls");
////        }
////    }while(p!=0);
////    do{cout<<"请输入您的密码（不要超过20位）："<<endl;
////        cin>>Orpassword;
////        cout<<"您的密码为"<<Orpassword<<",是否更改(确定则输入数字1，重新设置请输入数字2)"<<endl;
////        cin>>cs;
////        if((cs!=1)&&(cs!=2)) {cout<<"您的操作似乎有误！将返回菜单";
////            system("pause");
////            system("cls");
////            before();
////        }
////    }while(cs==2);
////    olist[i].SettleOrdinary(Orname,Orpassword);
////    i++;
////    cout<<"设置完毕"<<endl;
////    system("pause");
////    system("cls");
////    before();
////}                //添加用户
////
////void ShowList(){
////    int t=1;
////    char buffer[256];
////    out.open("olist.txt");
////    out<<"用户信息："<<"\n";
////    for(int a=0;a<=i;a++){
////        out<<"("<<t<<")"<<olist[a].getname()<<" "<<olist[a].getpassword()<<"\n";
////        t++;
////    }
////    out.close();
////    in.open("olist.txt");
////    in.getline(buffer,100);
////    cout<<buffer<<endl;
////    in.close();
////}            //显示用户名单
////
////void changepassword(int which){
////    string old;
////    int sure;
////    cout<<"请输入您的原密码："<<endl;
////    cin>>old;
////    if(old==olist[which].getpassword()) {
////        cout<<"密码正确！"<<endl;
////        system("pause");
////        system("cls");
////        do{string newone;
////            cout<<"请输入新密码:"<<endl;
////            cin>>newone;
////            cout<<"您的新密码是"<<newone<<",确定要设定为新密码吗？(确定则输入数字1，重新设置请输入数字2)"<<endl;
////            cin>>sure;
////            if(sure==1) {olist[which].change(newone);
////                cout<<"您已设置了新密码！"<<endl;
////                system("pause");
////                system("cls");
////                ouser(which);
////            }
////            else if((sure!=1)&&(sure!=2)) {cout<<"您的操作似乎有误，将返回主界面！"<<endl;
////                system("pause");
////                system("cls");
////                ouser(which);
////            }
////        }while(sure==2);
////    }
////    else {
////        cout<<"您输入的密码有误！"<<endl;
////        system("pause");
////        system("cls");
////        ouser(which);
////    }
////}                      //改密码
////
////void deleteaori(){
////    void ShowList();
////    cout<<"您想要删除的用户信息是哪一条？"<<endl;
////    int one;
////    cin>>one;
////    cout<<"您想要删除的是第"<<one<<"条用户信息："<<endl;
////    cout<<"("<<one<<")"<<olist[one-1].getname()<<" "<<olist[one-1].getpassword()<<endl;
////    int surer;
////    cout<<"确认要删除该信息吗？（确认请输入数字1，不确定请输入数字2）"<<endl;
////    cin>>surer;
////    if(surer==1){
////        for(int g=(one-1);g<i;g++){
////            olist[g].SettleOrdinary(olist[g+1].getname(),olist[g+1].getpassword());
////        }
////        i--;
////    }
////    else if(surer==2){cout<<"取消删除，将为您返回界面！"<<endl;
////        system("pause");
////        system("cls");
////    }
////    else if((surer!=1)&&(surer!=2)){cout<<"您的输入似乎有误，将为您返回界面！"<<endl;
////        system("pause");
////        system("cls");
////    }            //删除用户   即用下一个数组信息替代上一个  然后i相应减小  不显示
////}
////
////void FIRST(){
////    cout<<"****************************************"<<endl;
////    cout<<"               登录系统                 "<<endl;
////    cout<<"****************************************"<<endl;
////}
////
////void ouser(int num){
////    int p;
////    cout<<"(1)修改密码"<<endl;
////    cout<<"请输入您想操作的功能序号："<<endl;
////    cin>>p;
////    if(p==1) {
////        system("pause");
////        system("cls");
////        changepassword(num);
////    }
////    else {
////        cout<<"您将返回系统！"<<endl;
////        system("pause");
////        system("cls");
////    }               // 用户的界面
////}
////void auser(){
////    cout<<"(1)添加用户"<<endl;
////    cout<<"(2)删除用户"<<endl;
////    cout<<"(3)查看用户"<<endl;
////    cout<<"您想要使用的功能是？"<<endl;
////    int chose;
////    cin>>chose;
////    if(chose==1){setOrdinary();}
////    else if(chose==2){deleteaori();}
////    else if(chose==3){ShowList();}
////    else {cout<<"您的操作似乎有误！"<<endl;
////        system("pause");
////        system("cls");
////        auser();
////    }         //管理员界面
////}
////void before(){
////    int time=0;
////    cout<<"欢迎登录系统"<<endl;
////    cout<<"登录请输入数字1,注册新用户请输入数字2"<<endl;
////    int a;
////    int n;
////    cin>>a;
////    if(a==2){
////        system("pause");
////        system("cls");
////        if(i==0) firstsetOrdinary();
////        else setOrdinary();
////    }
////    else if(a==1){
//////        system("pause");
//////        system("cls");
////        FIRST();
////        string nameone;
////        cout<<"用户名：";
////        cin>>nameone;
////        char ch, p[20];
////        string password;
////        cout<<"密码：";
////
////
//////        do{int k= 0;
//////            while((ch=getchar())!='\r')
//////            {
//////                if(ch=='\b')
//////                {
//////                    if(k>0)
//////                    {
//////                        k--;
//////                        printf("\b \b");// 密码支持退格的实现
//////                    }
//////                    else
//////                        putchar(7);
//////                }
//////                else
//////                {
//////                    p[i++]=ch;
//////                    printf("*");
//////                }
//////            }
//////            p[k]='\0';
//////            cout<<endl;
////        int ck = 0;
////        cin>>p;
////        password = string(p);
////        system("pause");
////        if(nameone=="admin"){
////                Admin A;
////                ck=A.login(nameone,password);
////            }
////            for(n=0;n<=i;n++){
////                if(olist[n].getname()==nameone) {
////                    ck=olist[n].login(nameone,password);
////                }}
////            if(ck==1){
////                cout<<"用户登录成功！"<<endl;
////                system("pause");
////                system("cls");
////                ouser(n);
////            }
////            else if(ck==4){
////                cout<<"管理员登录成功！"<<endl;
////                system("pause");
////                system("cls");
////                auser();
////            }
////            else if((ck!=1)&&(ck!=4)) {cout<<"您的密码输入错误！请重新输入！"<<endl;
////                time++;
////                system("pause");
////                system("cls");
////                if(time>3){cout<<"密码输入错误超过三次!"<<endl;
////                    system("pause");
////                    system("cls");
////                    before();
////                }
////            }
////       // }while((ck==2)||(ck==5)){};
////    }
////} //整体函数使用  没有初始化
////
////int main()
////{
////    before();
////    return 0;
////}
////
//
//
//
//#include <iostream>
//#include <string>
//#include <fstream>
//#include <sstream>
//#include <stdlib.h>
////#include<conio.h>
//using namespace std;
//ofstream out;
//ifstream in;
//int i=0;
//void ouser(int which);
//void FIRST();
//void deleteaori();
//void changepassword();
//void ShowList();
//void setOrdinary();
//void firstsetOrdinary();
//void before();
//void auser();
//class User{
//private:
//    string name;
//    string password;
//public:
//    User(){}
//    User(string name,string password):name(name),password(password){}
//    ~User(){}
//    void setname(string n){name=n;}
//    void setpassword(string p){password=p;}
//    string getname(){return name;}
//    string getpassword(){return password;}
//    int login(string n,string p);
//    void change(string newpassword);
//};
//
//void User::change(string newpassword){
//    password=newpassword;
//}                     //修改密码
//class Ordinary:public User{
//public:
//    Ordinary(){}
//    Ordinary(string name,string password)
//    {setname(name);
//        setpassword(password);
//    }
//    ~Ordinary(){}
//    void SettleOrdinary(string n,string p){
//        setname(n);
//        setpassword(p);}
//    int login(string n,string p){
//        if(getname()==n)
//        {
//            if(getpassword()==p) return 1;
//            else return 2;
//        }
//    }
//};
//
//class Admin:public User{
//public:
//    Admin():User("admin","000000"){}
//    Admin(string name,string password)
//    {setname(name);
//        setpassword(password);
//    }
//    ~Admin(){}
//    int login(string n,string p){
//        if(n=="admin"){
//            if(p=="000000") return 4;
//            else return 5;
//        }
//    }
//};
//Ordinary olist[10];
//void firstsetOrdinary(){
//    string OrdinaryName;
//    string OrdinaryPassword;
//    int cl;
//    cout<<"请输入想要注册的用户名："<<endl;
//    cin>>OrdinaryName;
//    do{cout<<"请输入您的密码（不要超过20位）："<<endl;
//        cin>>OrdinaryPassword;
//        cout<<"您的密码为"<<OrdinaryPassword<<",是否更改(确定则输入数字1，重新设置请输入数字2)"<<endl;
//        cin>>cl;
//        if((cl!=1)&&(cl!=2)) {cout<<"您的操作似乎有误！将返回菜单";
//            system("pause");
//            system("cls");
//            before();
//        }
//    }while(cl==2);
//    olist[i].SettleOrdinary(OrdinaryName,OrdinaryPassword);
//    i++;
//    cout<<"设置完毕"<<endl;
//    system("pause");
//    system("cls");
//    before();
//}                  //初次设置用户
//void setOrdinary(){
//    string Orname;
//    string Orpassword;
//    int cs;
//    int p;
//    do{
//        cout<<"请输入想要注册的用户名："<<endl;
//        cin>>Orname;
//        p=0;
//        for(int m=0;m<=i;m++){
//            if(Orname==olist[m].getname())   p++;
//        }
//        if(p!=0) {cout<<"对不起，您的用户名与他人重复，请重新输入！"<<endl;
//            system("pause");
//            system("cls");
//        }
//    }while(p!=0);
//    do{cout<<"请输入您的密码（不要超过20位）："<<endl;
//        cin>>Orpassword;
//        cout<<"您的密码为"<<Orpassword<<",是否更改(确定则输入数字1，重新设置请输入数字2)"<<endl;
//        cin>>cs;
//        if((cs!=1)&&(cs!=2)) {cout<<"您的操作似乎有误！将返回菜单";
//            system("pause");
//            system("cls");
//            before();
//        }
//    }while(cs==2);
//    olist[i].SettleOrdinary(Orname,Orpassword);
//    i++;
//    cout<<"设置完毕"<<endl;
//    system("pause");
//    system("cls");
//    before();
//}                //添加用户
//
//void ShowList(){
//    int t=1;
//    char buffer[256];
//    out.open("olist.txt");
//    out<<"用户信息："<<"\n";
//    for(int a=0;a<=i;a++){
//        out<<"("<<t<<")"<<olist[a].getname()<<" "<<olist[a].getpassword()<<"\n";
//        t++;
//    }
//    out.close();
//    in.open("olist.txt");
//    in.getline(buffer,100);
//    cout<<buffer<<endl;
//    in.close();
//}            //显示用户名单
//
//void changepassword(int which){
//    string old;
//    int sure;
//    cout<<"请输入您的原密码："<<endl;
//    cin>>old;
//    if(old==olist[which].getpassword()) {
//        cout<<"密码正确！"<<endl;
//        system("pause");
//        system("cls");
//        do{string newone;
//            cout<<"请输入新密码:"<<endl;
//            cin>>newone;
//            cout<<"您的新密码是"<<newone<<",确定要设定为新密码吗？(确定则输入数字1，重新设置请输入数字2)"<<endl;
//            cin>>sure;
//            if(sure==1) {olist[which].change(newone);
//                cout<<"您已设置了新密码！"<<endl;
//                system("pause");
//                system("cls");
//                ouser(which);
//            }
//            else if((sure!=1)&&(sure!=2)) {cout<<"您的操作似乎有误，将返回主界面！"<<endl;
//                system("pause");
//                system("cls");
//                ouser(which);
//            }
//        }while(sure==2);
//    }
//    else {
//        cout<<"您输入的密码有误！"<<endl;
//        system("pause");
//        system("cls");
//        ouser(which);
//    }
//}                      //改密码
//
//void deleteaori(){
//    void ShowList();
//    cout<<"您想要删除的用户信息是哪一条？"<<endl;
//    int one;
//    cin>>one;
//    cout<<"您想要删除的是第"<<one<<"条用户信息："<<endl;
//    cout<<"("<<one<<")"<<olist[one-1].getname()<<" "<<olist[one-1].getpassword()<<endl;
//    int surer;
//    cout<<"确认要删除该信息吗？（确认请输入数字1，不确定请输入数字2）"<<endl;
//    cin>>surer;
//    if(surer==1){
//        for(int g=(one-1);g<i;g++){
//            olist[g].SettleOrdinary(olist[g+1].getname(),olist[g+1].getpassword());
//        }
//        i--;
//    }
//    else if(surer==2){cout<<"取消删除，将为您返回界面！"<<endl;
//        system("pause");
//        system("cls");
//    }
//    else if((surer!=1)&&(surer!=2)){cout<<"您的输入似乎有误，将为您返回界面！"<<endl;
//        system("pause");
//        system("cls");
//    }            //删除用户   即用下一个数组信息替代上一个  然后i相应减小  不显示
//}
//
//void FIRST(){
//    cout<<"****************************************"<<endl;
//    cout<<"               登录系统                 "<<endl;
//    cout<<"****************************************"<<endl;
//}
//
//void ouser(int num){
//    int p;
//    cout<<"(1)修改密码"<<endl;
//    cout<<"请输入您想操作的功能序号："<<endl;
//    cin>>p;
//    if(p==1) {
//        system("pause");
//        system("cls");
//        changepassword(num);
//    }
//    else {
//        cout<<"您将返回系统！"<<endl;
//        system("pause");
//        system("cls");
//    }               // 用户的界面
//}
//void auser(){
//    cout<<"(1)添加用户"<<endl;
//    cout<<"(2)删除用户"<<endl;
//    cout<<"(3)查看用户"<<endl;
//    cout<<"您想要使用的功能是？"<<endl;
//    int chose;
//    cin>>chose;
//    if(chose==1){setOrdinary();}
//    else if(chose==2){deleteaori();}
//    else if(chose==3){ShowList();}
//    else {cout<<"您的操作似乎有误！"<<endl;
//        system("pause");
//        system("cls");
//        auser();
//    }         //管理员界面
//}
//void before(){
//    int time=0;
//    cout<<"欢迎登录系统"<<endl;
//    cout<<"登录请输入数字1,注册新用户请输入数字2"<<endl;
//    int a;
//    int n;
//    cin>>a;
//    if(a==2){
//        system("pause");
//        system("cls");
//        if(i==0) firstsetOrdinary();
//        else setOrdinary();
//    }
//    else if(a==1){
//        system("pause");
//        system("cls");
//        FIRST();
//        int ck;
//        string nameone;
//        cout<<"用户名：";
//        cin>>nameone;
//        char ch, p[20];
//        string password;
//        cout<<"密码：";
//        do{int k= 0;
////            while((ch=getch!='\r')
////            {
////                if(ch=='\b')
////                {
////                    if(k>0)
////                    {
////                        k--;
////                        printf("\b \b");// 密码支持退格的实现
////                    }
////                    else
////                        putchar(7);
////                }
////                else
////                {
////                    p[i++]=ch;
////                    printf("*");
////                }
////            }
//            cin>>p;
//            cout<<p;
////            p[k]='\0';
//            cout<<endl;
//            cout<<strlen(p)<<"len"<<endl;
//            password = string(p);
//            cout<<password<<"ps"<<endl;
//            system("pause");
//            if(nameone=="admin"){
//                Admin A;
//                ck=A.login(nameone,password);
//            }
//            for(n=0;n<=i;n++){
//                if(olist[n].getname()==nameone) {
//                    ck=olist[n].login(nameone,password);
//                }}
//            if(ck==1){
//                cout<<"用户登录成功！"<<endl;
//                system("pause");
//                system("cls");
//                ouser(n);
//            }
//            else if(ck==4){
//                cout<<"管理员登录成功！"<<endl;
//                system("pause");
//                system("cls");
//                auser();
//            }
//            else if((ck!=1)&&(ck!=4)) {cout<<"您的密码输入错误！请重新输入！"<<endl;
//                time++;
//                system("pause");
//                system("cls");
//                if(time>3){cout<<"密码输入错误超过三次!"<<endl;
//                    system("pause");
//                    system("cls");
//                    before();
//                }
//            }
//        }while((ck==2)||(ck==5));
//    }
//}  //整体函数使用  没有初始化
//
//int main()
//{
//    before();
//    return 0;
//}
//
//
# include"iostream"
int main(){
    int x=2, y=3;
    x *= y+5;
    int i =2;
    bool b = (i++==3);
    std::cout<<b<<std::endl;
}