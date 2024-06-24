//
// Created by 蓝一潇 on 2021/2/1.
//
#include <stdio.h>
#include "stdlib.h"
int myAtoi(char * s){
    int idx_start = -1, idx_end = 0, symbol=1;
    long long int shiwei_count=1;
    int allow_symbol = 1;
    const int MAX = 2147483647;
    int num = 0;
    if(s[0]=='\0'){
        return 0;
    }
    for(int i=0;s[i]!='\0';i++){
        if(idx_start==-1) {
            if (s[i] == ' '|| s[i] == '0') {
                if(s[i]=='0'){
                    allow_symbol = 0;
                }
                if(allow_symbol==0&&s[i]==' '){
                    return 0;
                }
                continue;
            }
            else if (s[i] == '-') {
                if(allow_symbol==0){
                    return 0;
                }
                if(48<=s[i+1]&&s[i+1]<=57){
                idx_start = i + 1;
                    while(s[idx_start]=='0'){
                        idx_start += 1;
                    }
                idx_end = idx_start;
                symbol = -1;
                }else{
                    return 0;
                }
            }
            else if (s[i] == '+'){
                if(allow_symbol==0){
                    return 0;
                }
                if(48<=s[i+1]&&s[i+1]<=57){
                idx_start = i+1;
                    while(s[idx_start]=='0'){
                        idx_start += 1;
                    }
                idx_end = idx_start;
                symbol = 1;
                }else{
                    return 0;
                }
            }
            else if (48<=s[i]&&s[i]<=57){
                idx_start = i;
                idx_end = idx_start;
            }
            else{
                return 0;
            }
        }else{
            if(48<=s[i]&&s[i]<=57){
                idx_end = i;
            }else{
                break;
            }
        }
    }
    if(idx_start==-1&&idx_end==0){
        return 0;
    }
//    printf("%d %d \n", idx_start, idx_end);
    for(int i=idx_end-idx_start;i>=0;i--){
        long int tmp = (s[idx_start+i]-48) * shiwei_count;
        shiwei_count *= 10;
        if(shiwei_count>1e11){
            return symbol == 1 ? MAX : -MAX-1;
        }
        if(tmp >= MAX||tmp+num>=MAX){
            if(symbol==1){
                return MAX;
            }else{
                if(tmp+num==MAX){
                return -MAX;
                }else{
                    return -MAX-1;
                }
            }
        }
        num += tmp;
    }
    num *= symbol;
    return num;
}

//int main(){
////    printf("%d", '9'-48);
////    int a = 2147483647;
//    printf("%d", myAtoi("-000000000000000000000000000000000000000000000000001"));
////    printf("%d", '3'-48);
////    if(a+90000000000>a){
////        printf("%d", 10);
////    }
//
//
//    return 0;
//}
