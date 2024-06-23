////
//// Created by 蓝一潇 on 2018/4/19.
////
//# include <iostream>
//using namespace std;
//class String{
//private:
//    char *contents;
//public:
//    String(){*contents = '\0';}
//    int get_length();
//    char *get_contents(){return contents;}
//    void set_contents(int in_length, char *in_contents);
//    void set_contents(char *in_contents);
//};
//
//int String::get_length()
//{
//    int i=0;
//    char *p=contents;
//    while(*p++!='\0') i++;
//    return i;
//}
//void String::set_contents(int in_length, char *in_contents)
//{
//    in_contents[in_length]='\0';
//    contents=in_contents;
//}
//void String::set_contents(char *in_contents)
//{
//    contents=in_contents;
//}
//
//int main()
//{
//    String x,y;
//    x.set_contents("Hello, world!");
//    y.set_contents(34,"This is an object_oriented program");
//    char *p=x.get_contents();
//    char *q=y.get_contents();
//    cout<<"x="<<p<<"y="<<q<<'\n';
//    int i=x.get_length();
//    cout<<"The length of string x is"<<i;
//}
//
