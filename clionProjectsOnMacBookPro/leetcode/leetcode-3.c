//
// Created by 蓝一潇 on 2021/1/31.
//
#include <stdlib.h>
#include <stdio.h>
int lengthOfLongestSubstring(char * s){
    int start=0, max_length=0, now_length=0;
    int c[256] = {0};
    if(s[0]=='\0'){
        return 0;
    }
    if(s[1]=='\0'){
        return 1;
    }
    if(s[2]=='\0'&&s[0]==s[1]){
        return 1;
    }

    for(int i=0;s[i]!='\0';i++){

//        printf("here %c %c\n", s[start], s[i]);

//        if(s[i]==s[i+1]){
//            while(start < i){
//                c[s[start]] -= 1;
//                start += 1;
//            }
////            i++;
////            printf("here1 %d %d\n", start, i);
////            continue;
//        }

         if (c[s[i]] == 0){
            c[s[i]] += 1;
        }else{
            if(s[start]==s[i]){
//                printf("haha\n");
                start++;
//                if(start==i){
//                    i++;
//                }
            }else {
                while (s[start] != s[i]) {
                    c[s[start]] -= 1;
                    start++;
//                    printf("start:%d i:%d\n", start, i);
                    if (s[start] == s[i]){
//                    c[s[i]] -= 1;
                        break;
                    }
                }
                if(s[start]==s[i]){
                    start++;
                }

            }
        }
//        printf("start:%d i:%d i-s:%d\n", start, i, i-start);

//            printf("%d %d\n", i, start);
//            if(start!=0){
//                now_length = i - start;
//            }else{
//                now_length = i + 1;
//
//            }
        now_length = i - start + 1;
            if(i==start){
                now_length = 1;
            }
        if(now_length > max_length){
            max_length = now_length;
        }

                if(s[i]==s[i+1]){
            while(start < i){
                c[s[start]] -= 1;
                start += 1;
            }
//            i++;
//            printf("here1 %d %d\n", start, i);
//            continue;
        }


    }
    return max_length;
}

//int main(){
////    char a[100] = "abcabcbb";
////    char a[100] = "abcd";
////    char a[100] = "bbbbb";
////    char a[100] = "pwwkew";
////    char a[100] = "aabcbbbb";
////    char a[100] = "ccc";
////    char a[100] = "cbb";
////    char a[100] = "ckilbkd";
//    char a[100] = "abcabcbb";
//    printf("%d\n", lengthOfLongestSubstring(a));
//    return 0;
//}
