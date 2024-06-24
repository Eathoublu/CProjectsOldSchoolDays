//
// Created by 蓝一潇 on 2018/4/28.
//

#include <iostream>

using namespace std;
int i=0;
class Student
{
public:
    Student(int ID,char Name,int Score)
    {
        myID=ID;
        myName=Name;
        myScore=Score;
    }
    int getNum();
    int getAverage();
private:
    int myID,myScore;
    char myName;
    int classSize;
    float averageScore;
};
int Student::getNum()
{
    i++;
    classSize=i;
    return classSize;
}
int Student::getAverage()
{
    averageScore=((averageScore*(i-1))+myScore)/i;
    int a=averageScore-int(averageScore);
    if(a>0.5)
        averageScore=int(averageScore)+1;
    else
        averageScore=int(averageScore);
    return averageScore;
}
int main()
{
    int id,score;
    char name;
    while(cin>>id>>name>>score)
    {
        Student s(id,name,score);
        s.getNum();
        s.getAverage();
    }
    cout<<s.getNum()<<" "<<s.getAverage()<<endl;
    return 0;
}