#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>


void * print_a();
void * print_b();
int *a, *b;
/*
int main(){
//    int *a, *b; //放在这里，非全局 报错
    a = 0;
    b = 0;
    pthread_t t0;
    pthread_t t1;

    // 创建线程A
    if(pthread_create(&t0, NULL, print_a, NULL) == -1){
        puts("fail to create pthread t0");
        exit(1);
    }

    if(pthread_create(&t1, NULL, print_b, NULL) == -1){
        puts("fail to create pthread t1");
        exit(1);
    }

    // 等待线程结束
    void * result;
    if(pthread_join(t0, &result) == -1){
        puts("fail to recollect t0");
        exit(1);
    }

    if(pthread_join(t1, &result) == -1){
        puts("fail to recollect t1");
        exit(1);
    }

    printf("sdf%d%d", a, b);


    return 0;
}

 */

int main(){
    srand((unsigned int)time(NULL));
    printf("%d", rand());
}


// 线程A 方法
void * print_a(){
    for(int i = 0;i < 10; i++){
       // sleep(1);
        printf("a%d\n", a);
        a++;
        printf("a%d\n", a);
      //  puts("aa");
    }
    return NULL;

}

// 线程B 方法
void * print_b(){
    for(int i=0;i<10;i++){
      //  sleep(1);
        printf("b%d\n", b);
        b++;
        printf("b%d\n", b);
      //  puts("bb");
    }
    return NULL;
}