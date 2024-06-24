//
// Created by 蓝一潇 on 2021/2/2.
//
#include"stdlib.h"
#include "stdio.h"

int maxArea(int* height, int heightSize){
    heightSize--;
    int idx_fore=0, idx_last=heightSize;
    int max_size = -1;
    while(idx_fore!=idx_last){
        if(height[idx_fore]<=height[idx_last]){
            int now_fore_height = height[idx_fore], k=idx_fore;

            if((height[idx_fore]<=height[idx_last]?(idx_last-idx_fore)*height[idx_fore] : (idx_last-idx_fore)*height[idx_last]) > max_size){
                max_size = height[idx_fore]<=height[idx_last]?(idx_last-idx_fore)*height[idx_fore] : (idx_last-idx_fore)*height[idx_last];
            }
            while(k<idx_last){
                if(height[k]>now_fore_height){
                    idx_fore = k;
                    if((height[idx_fore]<=height[idx_last]?(idx_last-idx_fore)*height[idx_fore] : (idx_last-idx_fore)*height[idx_last]) > max_size){
                        max_size = height[idx_fore]<=height[idx_last]?(idx_last-idx_fore)*height[idx_fore] : (idx_last-idx_fore)*height[idx_last];
                    }
                    break;
                }
                k++;
            }
            if(k==idx_last){
                break;
            }
        }
        else if(height[idx_fore]>height[idx_last]){
            int now_last_height = height[idx_last], k=idx_last;

            if((height[idx_fore]<=height[idx_last]?(idx_last-idx_fore)*height[idx_fore] : (idx_last-idx_fore)*height[idx_last]) > max_size){
                max_size = height[idx_fore]<=height[idx_last]?(idx_last-idx_fore)*height[idx_fore] : (idx_last-idx_fore)*height[idx_last];
            }
            while(k>idx_fore){
                if(height[k]>now_last_height){
                    idx_last = k;
                    if((height[idx_fore]<=height[idx_last]?(idx_last-idx_fore)*height[idx_fore] : (idx_last-idx_fore)*height[idx_last]) > max_size){
                        max_size = height[idx_fore]<=height[idx_last]?(idx_last-idx_fore)*height[idx_fore] : (idx_last-idx_fore)*height[idx_last];
                    }
                    break;
                }
                k--;
            }
            if(k==idx_fore){
                break;
            }
        }
    }
    return max_size;
}

//int main(){
////    int a[5] = {1,2,3,4,5};
////    int a[] = {1,8,6,2,5,4,8,3,7};
////    int a[10] = {2,2};
////    int a[9] = {1,1};
////    int a[3] = {1,2,1};
////    int a[2] = {0,2};
//    int a[8] = {2,3,4,5,18,17,6};
//    printf("%d", maxArea(a, 7));
//
//    return 0;
//}
