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
//    cin>>a;
//    cout<<endl;
//    cout<<"请输入第二个字符串："<<endl;
//    cin>>b;
//    for(i=0;i<=100;i++)
//    {
//        if(a[i]=='\0'){
//            t=i-1;
//            break;}
//    }
// //   cout<<(t+1)<<endl;
//    for(i=0;i<=t;i++)
//    {
//        c[i]=a[i];
//    }
//    for(i=0;i<=100;i++)
//    {
//        if(b[i]!=' ')
//            c[i+t+1]=b[i];
//    }
//    cout<<"连接后的字符串为："<<endl;
//    for(i=0;i<=200;i++)
//    {
//        if(c[i]!='\0'){
//            cout<<c[i];
//        }else{
//            break;
//        }
//    }
//    return 0;
//}
