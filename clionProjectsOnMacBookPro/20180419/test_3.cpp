//
// Created by 蓝一潇 on 2018/4/19.
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    char a[100],b[100],c[200];
//    int i,t;
//    cout<<"请输入第一个字符串："<<endl;
//    cin>>a;//别忘了这种输入方式，如果用循环输入，系统无法自动在输入完字符串之后跳出循环，导致不能输入第二个字符串，无法进行下一步
//    cout<<"请输入第二个字符串："<<endl;
//    cin>>b;
//    for(i=0;i<=100;i++)
//    {
//        if(a[i]=='\0')//字符串结束的标志是“\0”而不是空格，这一点要注意
//        {t=i-1;
//            break;}//一定要用break跳出循环，否则循环继续，t的值会不准确
//    }
//    for(i=0;i<=t;i++)
//    {
//        c[i]=a[i];
//    }
//    for(i=0;i<=100;i++)
//    {
//        if(b[i]!='\0')
//            c[i+t+1]=b[i];
//        else break;
//    }
//    cout<<"连接后的字符串为："<<endl;
//    for(i=0;i<=200;i++)
//    {
//        if(c[i]!='\0')
//            cout<<c[i];
//        else break;
//    }
//    return 0;
//}
