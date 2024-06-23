#include <unistd.h>
#include <sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include<time.h>
#define MAX 10
//蓝一潇 20174899 电子1701
char word[4] = "NEU"; //定义关键词NEU
char ala[100] = "警报！ALARM!FIND TARGET!!!\n"; //定义报警时输出的字符串

void readProc(int sig) //子进程处理函数
{
    if(sig==SIGCHLD)
    {
        int status;
        waitpid(-1,&status,WNOHANG);
        if(WIFEXITED(status))
        {
            printf("离开子进程 返回值: %d \n",WEXITSTATUS(status));
            sleep(30);
        }
    }
}
int count(char new_str[1000], int len){ //对关键词NEU进行统计
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
    return temp_count;

}

int main()
{
    struct sigaction sig; //创建多进程环境
    sig.sa_handler=readProc; 
    sigemptyset(&sig.sa_mask);
    sig.sa_flags=0;
    sigaction(SIGCHLD,&sig,0);
    int fd1[2],fd2[2]; 
    char buf[100];
    pipe(fd1); //创建管道，并初始化管道
    pipe(fd2);
    pid_t id; 
    id = fork(); //fork的方式，创建新的进程，id可表示进程号，将当前程序fork一份，下面通过判断当前程序的进程号
    if(id==0) //id==0时，意为是子进程1，为子进程1的入口
    {
        /* 下面的功能和“基础程序”的功能基本一致，唯一不同的是使用管道与主进程进行通信 */
        FILE *fp;
        if ((fp = fopen("log1.txt", "a")) == NULL) {
            printf("打开文件出现错误！");
            getchar();
            //exit(1);
        }
        int counts = 0;

        while (1) {
            FILE *fp;
            if ((fp = fopen("log1.txt", "a")) == NULL) {
                printf("打开文件出现错误！");
                getchar();
                //exit(1);
            }
            char ch, st[100];
            printf("\n请输入内容:");
            scanf("%s", st);
            fputs(st, fp);
            rewind(fp);
            ch = fgetc(fp);
            while (ch != EOF) {
                putchar(ch);
                ch = fgetc(fp);
            }
            printf("\n已存储!\n");

            fp = fopen("log1.txt", "rb");
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
            ar = (char *) malloc(sizeof(char) * size);

            //读文件
            fread(ar, 1, size, fp);//每次读一个，共读size次
            if (ar == NULL) {
                continue;
            }
            //printf("THREAD2:\n文件现在的内容：%s\n", ar);
            counts = count(ar, strlen(ar));
            printf("统计得到关键词数量：%d\n", counts);
            if (counts >= 3) {
                char str1[] = "ALARM!报警 NEU 关键词 出现次数达到阈值,在 log1.txt中";
                write(fd1[1], str1, sizeof(str1));
                sleep(2);
            }


            fclose(fp);
            free(ar);
        }

    }else{ //主进程入口
        while (1) {
            read(fd1[0], buf, 100); //读取的时候是会阻塞的！
            printf("主进程收到子进程传回的信息: %s \n", buf); //一旦有信息返回，则打印在标准输出
            sleep(1);
        }
    }
    return 0;
}
