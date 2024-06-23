//#include iostream
//#include string
//#include cmath
//#include stdio.h
//using namespace std;
//class Student{
//public
//    Student(string xid,string xname,int xscore)id(xid),name(xname),score(xscore){
//        classSize++;
//        sumscore+=score;
//    }
//    int getNum(){return classSize;}
//    int getAverage(){return floor((double)sumscoreclassSize+0.5);}
//private
//    string id;
//    string name;
//    int score;
//    static int classSize;
//    static int sumscore;
//};
//int StudentclassSize=0;
//int Studentsumscore=0;
//int main()
//{
//    int i;
//    string xid;
//    string xname;
//    int xscore;
//    scanf(%s,xid);
//    printf(%s,xid);
//    while(scanf(%s %s %d,xid,xname,&xscore)!=EOF){
//        cinxidxnamexscore;
//        Student information(xid,xname,xscore);
//        coutinformation.getNum() information.getAverage()endl;
//    }
//    coutinformation.getNum() information.getAverage()endl;
//    cinxidxnamexscore;
//    Student information(xid,xname,xscore);
//    cout1;
//    return 0;
//}

#include <iostream>

using namespace std;

class Step
{
public:
    Step(int Mon,int Tue,int Wed,int Thu,int Fri,int Sta,int Sun);
    Step(Step &step);
    int getMax(Step &step);
    int getMin(Step &step);
    int getAverage(Step &step);
    void showAnswer(Step &step);
private:
    int mon,tue,wed,thu,fri,sta,sun;
};
Step::Step(int Mon,int Tue,int Wed,int Thu,int Fri,int Sta,int Sun)
{
    mon=Mon;
    tue=Tue;
    wed=Wed;
    thu=Thu;
    fri=Fri;
    sta=Sta;
    sun=Sun;
}
int Step::getMax(Step &step)
{
    int t=step.mon;
    if(t<step.tue)
        t=step.tue;
    else if(t<step.wed)
        t=step.wed;
    else if(t<step.thu)
        t=step.thu;
    else if(t<step.fri)
        t=step.fri;
    else if(t<step.sta)
        t=step.sta;
    else if(t<step.sun)
        t=step.sun;
    return t;
}
int Step::getMin(Step &step)
{
    int r=step.mon;
    if(r>step.tue)
        r=step.tue;
    else if(r>step.wed)
        r=step.wed;
    else if(r>step.thu)
        r=step.thu;
    else if(r>step.fri)
        r=step.fri;
    else if(r>step.sta)
        r=step.sta;
    else if(r>step.sun)
        r=step.sun;
    return r;
}
int Step::getAverage(Step &step)
{
    int z=(step.mon+step.tue+step.wed+step.thu+step.fri+step.sta+step.sun)/7;
    return z;
}
void Step::showAnswer(Step &step)
{
    cout<<step.getMax<<endl<<step.getMin<<endl<<step.getAverage<<endl;
}
int main()
{
    int n,MON,TUE,WED,THU,FRI,STA,SUN;
    cin>>n;
    Step step;
    for(int i=0;i<n;i++)
    {
        cin>>MON>>TUE>>WED>>THU>>FRI>>STA>>SUN;
        Step step(MON,TUE,WED,THU,FRI,STA,SUN);
        step.showAnswer(step);
    }
    return 0;
}