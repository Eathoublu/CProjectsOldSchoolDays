//
// Created by 蓝一潇 on 2020/6/25.
//

#include<iostream>
#include<cmath>
#include <math.h>
using  namespace  std;

class Point{
public:
    int x, y;

public:
    Point(int i, int j){
        x = i;
        y = j;
    }

};
class LineSegment{
public:
    LineSegment(Point p1, Point p2){
        x1 = p1.x;
        x2 = p2.x;
        y1 = p1.y;
        y2 = p2.y;
    }

    double getLength(){
        return pow((x1-x2<0?x1-x2:x2-x1)*(x1-x2<0?x1-x2:x2-x1)+(y1-y2<0?y1-y2:y2-y1)*(y1-y2<0?y1-y2:y2-y1), 0.5);
    }

    bool contains(Point p){
        float k, _k;
        k = (y1-y2)/(x1-x2);
        _k = 1/k;
        return true;
    }

private:
    int x1, x2, y1, y2;


};




int  main0(){

    Point  a(1,2);
    Point  b(3,4);
    Point  c(3,5);
    LineSegment  l1(a,b);
    LineSegment  l2(a,c);
    cout<<"the  length  of  l1  is:"<<l1.getLength()<<endl;
    cout<<"the  length  of  l2  is:"<<l2.getLength()<<endl;
//        if(l2>l1){
//          cout<<"l2  is  longer  than  l1"<<endl;
//        }
//        if(l2.contains(a)){
//          cout<<"a  is  on  the  linesegment  l2"<<endl;
//        }

    return  0;


}