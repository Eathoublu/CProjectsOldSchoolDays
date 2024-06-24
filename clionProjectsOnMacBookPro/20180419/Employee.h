//
// Created by 蓝一潇 on 2018/4/19.
//
#include <iostream>
using namespace std;

#ifndef LAB2_1_EMPLOYEE_H
#define LAB2_1_EMPLOYEE_H


class Employee{
private:
    string name;
    string address;
    string post_code;
public:
    Employee(){
    }
    void init(string _name,string _address, string _post_code){
        this->name = _name;
        this->address = _address;
        this->post_code = _post_code;
    }
    void display(){
        cout<<"name:"<<this->name<<endl;
        cout<<"address:"<<this->address<<endl;
        cout<<"post_code:"<<this->post_code<<endl;
    }







};


#endif //LAB2_1_EMPLOYEE_H
