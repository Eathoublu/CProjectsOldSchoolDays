//
// Created by 蓝一潇 on 2018/12/29.
//
# include<stdio.h>
/*
int main(){

    printf("原始方法\n");

    int arr[100] = {0};
    int m=0,n=0,head = 0,tail = 0,num=0;

    printf("请输入元素个数：");
    scanf("%d", &num);
    for(int i = 1; i<=num;i++){
        printf("请输入元素：");
        scanf("%d", &arr[i]);
    }
    printf("请输入m，n的值：");
    scanf("%d %d", &m, &n);

    n = num-n+1;
    tail = num;
    head = n;

    for(int i = m+1;i<=n-1;i++){
        tail++;
        arr[tail] = arr[i];
    }



    for (int i = 1;i <= m;i++){
        tail++;
        arr[tail] = arr[i];
    }

    for(int i = head;i<=tail;i++){
        printf("%d ", arr[i]);
    }





}
*/