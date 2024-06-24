#include <iostream>
#include <string>
# define EOF (-1)
using namespace std;
class Student{
public:
    Student(){myID="0",myName="0",myScore=0;}
    Student(string myID,string myName,int myScore)
            :myID(myID),myName(myName),myScore(myScore){
        classSize++;
        sum+=myScore;
        averageScore=sum/classSize;
    }
    Student(Student&s){
        myID=s.myID;
        myName=s.myName;
        myScore=s.myScore;
        classSize++;
        sum+=myScore;
        averageScore=sum/classSize;
    }
    ~Student(){classSize--;sum-=myScore;averageScore=sum/classSize;}
    void Settle(string id,string name,int score)
    {myID=id,myName=name,myScore=score;
        classSize++;
        sum+=myScore;
        averageScore=sum/classSize;
    }
    static void getNum(){
        cout<<classSize<<" ";
    }
    static void getAverage(){
        cout<<averageScore;
    }
private:
    string myID,myName;
    int myScore;
    static int sum,classSize,averageScore;
};
int Student::sum=0;
int Student::classSize=0;
int Student::averageScore=0;

int main()
{
    int i=0;
    string id[8],name[20];
    int score[3];
    Student students[100];
    while(cin>>id[i]>>name[i]>>score[i])
    {students[i].Settle(id[i],name[i],score[i]);
        if (score[i]==EOF) break;
        i++;
    }
    Student::getNum();
    Student::getAverage();
    return 0;
}