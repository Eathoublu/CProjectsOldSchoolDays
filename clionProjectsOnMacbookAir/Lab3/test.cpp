////
//// Created by 蓝一潇 on 2018/4/25.
////
///*
//#include <iostream>
//
//using namespace std;
//
//class Step
//{
//public:
//    Step(int Mon,int Tue,int Wed,int Thu,int Fri,int Sta,int Sun);
//    Step(){};
//    Step(Step &step);
//    int getMax();
//    int getMin();
//    static int getAverage(Step &step);
//    void showAnswer(Step &step);
//private:
//    int mon,tue,wed,thu,fri,sta,sun;
//};
//Step::Step(int Mon,int Tue,int Wed,int Thu,int Fri,int Sta,int Sun)
//{
//    mon=Mon;
//    tue=Tue;
//    wed=Wed;
//    thu=Thu;
//    fri=Fri;
//    sta=Sta;
//    sun=Sun;
//}
//int Step::getMax()
//{
//    int t=mon;
//    if(t<tue)
//        t=tue;
//    if(t<wed)
//        t=wed;
//    if(t<thu)
//        t=thu;
//    if(t<fri)
//        t=fri;
//    if(t<sta)
//        t=sta;
//    if(t<sun)
//        t=sun;
//  //  cout<<"max"<<t<<endl;
//    return t;
//}
//int Step::getMin()
//{
//    int r=mon;
//    if(r>tue)
//        r=tue;
//    if(r>wed)
//        r=wed;
//    if(r>thu)
//        r=thu;
//    if(r>fri)
//        r=fri;
//    if(r>sta)
//        r=sta;
//    if(r>sun)
//        r=sun;
//    return r;
//}
//int Step::getAverage(Step &step)
//{
//
//    int z=(step.mon+step.tue+step.wed+step.thu+step.fri+step.sta+step.sun)/7;
//    return z;
//}
//void Step::showAnswer(Step &step)
//{
//    cout<<this->getMax()<<endl<<this->getMin()<<endl;
//    cout<<this->getAverage(step)<<endl;
//}
//int main()
//{
//    int n,MON,TUE,WED,THU,FRI,STA,SUN;
//    cin>>n;
//    Step step;
//    for(int i=0;i<n;i++)
//    {
//        cin>>MON>>TUE>>WED>>THU>>FRI>>STA>>SUN;
//        Step step(MON,TUE,WED,THU,FRI,STA,SUN);
//        step.showAnswer(step);
//    }
//    return 0;
//}
//
//
//
//*/
////
////
////#include <iostream>
////
////using namespace std;
////
////class Step
////{
////public:
////    Step(int Mon,int Tue,int Wed,int Thu,int Fri,int Sta,int Sun);
////    Step(Step &step);
////    static int getMax(Step &step);
////    static int getMin(Step &step);
////    static int getAverage(Step &step);
////    void showAnswer(Step &step);
////private:
////    int mon,tue,wed,thu,fri,sta,sun;
////};
////Step::Step(int Mon,int Tue,int Wed,int Thu,int Fri,int Sta,int Sun)
////{
////    mon=Mon;
////    tue=Tue;
////    wed=Wed;
////    thu=Thu;
////    fri=Fri;
////    sta=Sta;
////    sun=Sun;
////}
////int Step::getMax(Step &step)
////{
////    int t=step.mon;
////    if(t<step.tue)
////        t=step.tue;
////    if(t<step.wed)
////        t=step.wed;
////    if(t<step.thu)
////        t=step.thu;
////    if(t<step.fri)
////        t=step.fri;
////    if(t<step.sta)
////        t=step.sta;
////    if(t<step.sun)
////        t=step.sun;
////    return t;
////}
////int Step::getMin(Step &step)
////{
////    int r=step.mon;
////    if(r>step.tue)
////        r=step.tue;
////    if(r>step.wed)
////        r=step.wed;
////    if(r>step.thu)
////        r=step.thu;
////    if(r>step.fri)
////        r=step.fri;
////    if(r>step.sta)
////        r=step.sta;
////    if(r>step.sun)
////        r=step.sun;
////    return r;
////}
////int Step::getAverage(Step &step)
////{
////    int z;
////    z=(step.mon+step.tue+step.wed+step.thu+step.fri+step.sta+step.sun)/7;
////    return z;
////}
////void Step::showAnswer(Step &step)
////{
////    cout<<step.getMax(step)<<endl<<step.getMin(step)<<endl<<step.getAverage(step)<<endl;
////}
////int main()
////{
////    int n,MON,TUE,WED,THU,FRI,STA,SUN;
////    cin>>n;
////    for(int i=0;i<n;i++)
////    {
////        cin>>MON>>TUE>>WED>>THU>>FRI>>STA>>SUN;
////        Step step(MON,TUE,WED,THU,FRI,STA,SUN);
////        step.showAnswer(step);
////    }
////    return 0;
////}
//
//
//#include <iostream>
//#include<math.h>
//#include<iomanip>
//using namespace std;
//
//class Rectangle
//{
//public:
//    Rectangle(int X1,int X2,int Y1,int Y2)
//    {
//        x1=X1;
//        y1=X2;
//        x2=Y1;
//        y2=Y2;
//    }
//   // Rectangle(Rectangle &R);
//   // Rectangle(){};
//    double myDis,myArea;
//    double getLength(Rectangle &R);
//    int getArea(Rectangle &R);
//    static void getResult(Rectangle &R);
//    int
//private:
//    int x1,x2,y1,y2;
//};
//double Rectangle::getLength(Rectangle &R)
//{
//double L;
////cout<<"GL"<<x1<<x2<<y1<<y2<<endl;
//L=sqrt((R.x2-R.x1)*(R.x2-R.x1)+(R.y2-R.y1)*(R.y2-R.y1));
//return L;
//}
//int Rectangle::getArea(Rectangle &R)
//{
//int S;
////cout<<"GA"<<x1<<x2<<y1<<y2<<endl;
//S=(R.x2-R.x1)*(R.y2-R.y1);
//return S;
//}
//void Rectangle::getResult(Rectangle &R)
//{
//  //  cout<<R.x1<<R.x2<<endl;
//  //  cout<<R.y1<<R.y2<<endl;
// cout<<"result:"<<R.getLength(R)<<"result2:"<<R.getArea(R)<<endl;
//}
//int main()
//{
//    int n,a,b,c,d;
//    cin>>n;
//
//    for(int i=0;i<n;i++)
//    {
//        cin>>a>>b>>c>>d;
//        Rectangle Ro(a,b,c,d);
//        Ro.getResult(Ro);
//    }
//    return 0;
//}