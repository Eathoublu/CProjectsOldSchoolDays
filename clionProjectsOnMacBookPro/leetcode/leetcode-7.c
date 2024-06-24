//
// Created by 蓝一潇 on 2021/2/16.
//

//
// Created by 蓝一潇 on 2021/2/16.
//
#include <stdio.h>
#include <stdlib.h>
#include "limits.h"

int reverse(int x){
    char reverse_string[100] = {0};
    int idx_r=0, zf=1;
    if(x<0){
//        reverse_string[idx_r] = '-';
//        idx_r ++;
        zf = -1;
    }
    x = x<0?-x:x;
    int g, d;
    d = x % 10;
    g = x / 10;
//    printf("%d %d\n", d, g);
    reverse_string[idx_r] = (char)(d+48);
    idx_r ++;
    while(g!=0){
        d = g % 10;
        g /= 10;
//        printf("%d %d\n", d, g);
        reverse_string[idx_r] = (char)(d+48);
        idx_r++;
    }
    idx_r--;
    long int res=0, w=1;
    while (idx_r>=0){
        res += (reverse_string[idx_r] - 48)*w;
        w *= 10;
        idx_r--;
        if(res>=INT32_MAX||res<=INT32_MIN){
            return 0;
        }
    }
    return (int)res * zf;

}

//int main(){
////    int a = 1534236469;
//    int a =-2147483648;
////    long int b = 2^31-1;
////    reverse(a);
////    printf("%ld", b);
//    printf("%d", reverse(a));
////    char s[100];
////    s = reverse(a);
////    for(int i=0;s[i]!='\0';i++){
////        printf("%c", s[i]);
//
////    char c[100] = ;
////    printf("%d", INT32_MAX);
//    return 0;
//}