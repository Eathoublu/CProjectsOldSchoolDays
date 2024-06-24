//
// Created by 蓝一潇 on 2021/2/18.
//
# include<stdio.h>
int minKBitFlips(int* A, int ASize, int K){
    int total=0;
    if(K==0){
        return -1;
    }
    for(int i=0;i<ASize;i++){
        if(i+K>ASize){
            for(int k=i+1;k<ASize;k++){
                if(A[k]==0){
                    return -1;
                }
            }
        }
        if(A[i]==0){
            for(int j=0;j<K;j++){
                if(i+j>=ASize){
                    return -1;
                }
                A[i+j] = A[i+j]==1?0:1;
            }
            total += 1;
        }
    }
    return total;
}

int main(){
    int a[100] = {1, 1, 0};
    printf("%d", minKBitFlips(a, 3, 2));
}

