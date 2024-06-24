//
// Created by 蓝一潇 on 2018/4/19.
//

//#include <iostream>
//using namespace std;
//
//class Employee{
//private:
//    string name;
//    string address;
//    string post_code;
//public:
//    Employee(){
//    }
//    void init(string _name,string _address, string _post_code){
//        this->name = _name;
//        this->address = _address;
//        this->post_code = _post_code;
//    }
//    void display(){
//        cout<<"name:"<<this->name<<endl;
//        cout<<"address:"<<this->address<<endl;
//        cout<<"post_code:"<<this->post_code<<endl;
//    }
//
//
//
//};
//
//
//int main(){
//
//    string name = "xiaoming";
//    string address = "huoxing";
//    string post_code = "510000";
//    int i;
//
// //   Employee xiaoming(name,address,post_code);
//    Employee worker[5];
//    for(i = 0;i<=4;i++){
//        worker[i].init(name,address,post_code);
//    }
//    for(i = 0;i<=4;i++){
//        worker[i].display();
//    }
//
//    return 0;
//}

#include <iostream>

using namespace std;
//int i=0;
class Student
{
public:
    Student(){};
    void Student_update(int ID,char Name,int Score)
    {
        classSize++;
        myID=ID;
        myName=Name;
        sumScore+=Score;
        averageScore=sumScore/classSize;

    }
    int getNum();
    int getAverage();
private:
    int myID,sumScore;
    char myName;
    int classSize ;
    float averageScore ;
};
int Student::getNum()
{
  // i++;
  //  classSize=i;
    return classSize;
}
int Student::getAverage()
{
    //averageScore=((averageScore*(i-1))+myScore)/i;
    int averageScore_in;
    cout<<averageScore<<"xixi"<<endl;
    int a=averageScore-int(averageScore);
    if(a>0.5)
        averageScore_in=int(averageScore)+1;
    else
        averageScore_in=int(averageScore);
    return averageScore_in;
}
int main()
{
    int id,score;
    char name;
    Student s;
    while(cin>>id>>name>>score)
    {
        cout<<" sdv"<<endl;
        s.Student_update(id,name,score);
       // s.getNum();
       // s.getAverage();
    }
    cout<<s.getNum()<<" "<<s.getAverage()<<endl;
    return 0;
}