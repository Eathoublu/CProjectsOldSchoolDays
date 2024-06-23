//
// Created by 蓝一潇 on 2020/6/25.
//
#include <iostream>
using namespace std;
const int SIZE = 10;

class safearay
{
   private:
      int arr[SIZE];
   public:
      safearay()
      {
         register int i;
         for(i = 0; i < SIZE; i++)
         {
           arr[i] = i;
         }
      }
      int& operator[](int i)
      {
          if( i > SIZE )
          {
              cout << "索引超过最大值" <<endl;
              // 返回第一个元素
              return arr[0];
          }
          return arr[i];
      }
};
//22
int main22()
{
   safearay A;

   cout << "A[2] 的值为 : " << A[2] <<endl;
   cout << "A[5] 的值为 : " << A[5]<<endl;
   cout << "A[12] 的值为 : " << A[12]<<endl;

   return 0;
}
