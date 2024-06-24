//
// Created by 蓝一潇 on 2018/5/20.
//

//#include <iostream>
//using namespace std;
//class Fish {
//public:
//    Fish()
//    {
//        age=328;
//    }
//    void said()
//    {
//        cout << "I am a fish, my age is "<< age << "." << endl;
//    }
//protected:
//    int age;
//};
///*
//在此补全FishKing类,他继承了父类的age属性,说的话却改变成了“I,FishKing,”加上他的年龄,详见样例输出;
//将补全后的代码提交即可.
//注意：一定要将补全后的所有代码提交，即包含头文件、类定义、main函数。
//*/
//class FishKing:protected Fish{
//public:
//    int age_king = age;
//    FishKing(){};
//    void said(){cout << "I,FishKing,"<< age << endl;}
//};
//int main()
//{
//    FishKing SaltedFishKing;
//    SaltedFishKing.said();
//    return 0;
//}