#include<stdio.h>
#include<stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include<time.h>
#define MAX 10

// 蓝一潇 电子1701 20174899

char word[4] = "NEU"; //设置警戒词
char ala[100] = "警报！ALARM!FIND TARGET!!!\n"; //定义报警词
int counts = 0;

void *thread1(void *arg) { //第一个线程

    FILE *fp;
    if ((fp = fopen("log.txt", "a")) == NULL) { //打开文件，打不开就退出
        printf("打开文件出现错误！");
        getchar();
        exit(1);
    }

    while (1) {
        char ch, st[100];
        printf("THREAD1:\n请输入内容:"); 
        scanf("%s", st); //不停从终端读入内容
        fputs(st, fp); //将读入的内容以a方式写入文件
        rewind(fp);
        ch = fgetc(fp); 
        while (ch != EOF) {
            putchar(ch);
            ch = fgetc(fp);
        }
        printf("\nTHREAD1:已存储!\n");
    }
    fclose(fp);
}

// 统计NEU出现的个数
int count(char new_str[1000], int len){
    int temp_count = 0;
    for (int i=0;i<=len;i++){
        if (new_str[i]==word[0]){
            if(new_str[i+1]==word[1]){
                if(new_str[i+2]==word[2]){
                    temp_count++;
                }
            }
        }
    }
    counts = temp_count;
    printf("THREAD2:FIND %d TARGETS.\n", temp_count); //打印一下，找到了多少个NEU

}



void *thread2(void *arg){ //线程2的处理函数
    while (1){
        FILE *fp;
        //二进制方式打开文件
        fp = fopen("log.txt", "rb"); //read binary的方式打开，只读
        if (NULL == fp) {
            printf("出错了！打不开啊\n");
        }
        sleep(3);
        int size = 0;
        char *ar;

        //求得文件的大小
        fseek(fp, 0, SEEK_END);
        size = ftell(fp);
        rewind(fp);

        //申请一块能装下整个文件的空间
        ar = (char*) malloc(sizeof(char) * size);

        //读文件
        fread(ar, 1, size, fp);//每次读一个，共读size次
        if (ar == NULL){
            continue;
        }
        //printf("THREAD2:\n文件现在的内容：%s\n", ar);
        count(ar, strlen(ar)); //用count函数统计NEU的个数
        fclose(fp);
        free(ar); //生存周期为一个循环，所以free一下，防止产生内存垃圾
    }
}
void *thread3(void *arg){ //第三个线程
    char output[100] = {0}; //输出
    FILE *fp;
    if ((fp = fopen("alarm.txt", "a")) == NULL) {
        printf("糟糕，无法打开文件");
        getchar();
        //exit(1);
    }

    while (1) {
        time_t timep;
        struct tm *p;
        time (&timep);
        p=gmtime(&timep);
        sleep(5);
        char ch;
        if (counts >= 3){ //若发现NEU的个数超过3
            sprintf(output, "%s %d:%d:%d", ala, 8+p->tm_hour, p->tm_min, p->tm_sec); //将格式化打印进output字符串
            fputs(output, fp); //输出至文件
            rewind(fp);
            ch = fgetc(fp);
            while (ch != EOF) {
                putchar(ch);
                ch = fgetc(fp);

            }
            printf(output); //再打印至标准输出
        }
    }
    fclose(fp);
}



int main(){
    sem_t _sems;
    pthread_t t1, t2, t3; //声明三个线程
    pthread_create(&t1, NULL, thread1, &_sems); //使用函数指针创建线程
    pthread_create(&t2, NULL, thread2, &_sems);
    pthread_create(&t3, NULL, thread3, &_sems);
    pthread_join(t1, NULL); //join，开启线程
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    sem_destroy(&_sems); 
    return 0;
}