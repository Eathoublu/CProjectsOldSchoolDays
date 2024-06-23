//
// Created by 蓝一潇 on 2020/6/25.
//
#include  <iostream>
#include  <string>
using  namespace  std;
class MyDate{
public:
    unsigned int year, month, day;
    MyDate(unsigned int a,unsigned int b,unsigned int c){
        this->year=a;
        this->month=b;
        this->day=c;
    };
};

class Person{
  public:
string name;
MyDate birthday;
Person(string a, MyDate b):name(a), birthday(b){
    birthday = b;
    name = a;
};
string getName(){return this->name;};
    bool operator >(const Person& p)
    {
        if(birthday.year<p.birthday.year)
        {
            return true;
        }
        else if(birthday.year==p.birthday.year&&birthday.month<p.birthday.month)
        {
            return true;
        }
        else if(birthday.year==p.birthday.year&&birthday.month==p.birthday.month&&birthday.day<p.birthday.day){
            return true;
        }
        return false;
    }

    bool operator ==(const Person& p)
    {
        if(birthday.year==p.birthday.year && birthday.month==p.birthday.month && birthday.day == p.birthday.day)
        {
            return true;
        }
        return false;
    }

};

//66

int  main66()
{
    MyDate  date1(2000,11,5),date2(2001,5,6);
    Person  p1("Zhang  San",date1),p2("Li  Si",date2);
//    cout<<p1.getName()<<"'s  birthday:"<<date1<<endl;
//    cout<<p2.getName()<<"'s  birthday:"<<date2<<endl;
    if  (p1>p2)  cout<<p1.getName()<<"  is  elder  than  "<<p2.getName()<<"."<<endl;
    else  if(p1==p2)  cout<<p1.getName()<<"and  "<<p2.getName()<<"  are  of  the  same  age."<<endl;
    else  cout<<p1.getName()<<"  is  younger  than  "<<p2.getName()<<"."<<endl;
    return  0;
}