#include <iostream>
#include <string>
#include <cmath>

class Student{
    public:
    Student(){}
    void addStudent(int number, std::string name, int score){
        Score[Idx] = score;
        Name[Idx] = name;
        Number[Idx] = number;
        Idx += 1;
    }

    double getAverage(){
        int i = 0;
        double sum = 0;
        for(i=0;i<=Idx;i++){
            sum += Score[i];
        }
        sum /= Idx;
        return sum;
    }
    int getNum(){
        return Idx;
    }

private:

    int Idx = 0;
    int Score[1000] = {0};
    long int Number[1000] = {0};
    std::string Name[1000];

};

int round1(double number)
{
    return (number>0.0)?(number+0.5):(number-0.5);
}

int main() {
    Student student;
    int score = 0;
    std::string name;
    int number = 0;
    while (std::cin>>number){
        std::cin>>name;
        std::cin>>score;
        student.addStudent(number, name, score);
    }

    std::cout << student.getNum() << ' ' << round1(student.getAverage()) << std::endl;
    return 0;
}