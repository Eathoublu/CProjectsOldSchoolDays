//
// Created by 蓝一潇 on 2018/6/15.
//

//#include<stdio.h>
//int main()
//{
//    int i;
//    if (freopen ("output.txt", "w", stdout) == NULL){
//        fprintf(stderr, "error redirecting stdout\n");
//    }
//    for (i = 0; i < 10; i++)
//        printf("%3d", i);
//    printf("\n");
//    fclose(stdout);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a, b;
//    freopen("in.txt","r",stdin);
//    /* 如果in.txt不在连接后的exe的目录，需要指定路径如D:\in.txt */
//    freopen("out.txt","w",stdout); /*同上*/
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        printf("dsfsdf");
//        printf("%d\n",a+b);
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//    FILE *stream;
//    char a[100] = {};
//    if ((stream = freopen("file.txt", "r", stdin)) == NULL)
//    { exit(-1);}
//    scanf("%s", &a);
//    printf("%sf\n", &a);
//    printf("this is stdout output\n");
////    stream = freopen("/dev/tty","w",stdout);
//    /*stdout是向程序的末尾的控制台重定向*/
//    printf("And now back to the console once again\n");
//    return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//    FILE *fp = NULL;
//    char tmp[100];
//    fp = fopen("tmp.txt", "r");
//    if (NULL == fp)
//    {
//        printf("File open fail!\n");
//        return -1;
//    }
//    fread(tmp, 1, 100, fp);
//    printf("%s\n", tmp);
//    fclose(fp);
//    fp = NULL;
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h> /* 为了使用exit() */

int main(void)
{
    int i = 0; /* 用于 putchar & getc 的数据接收 */
    char *ch = "";
    char c;
    int d;
    FILE *fp = NULL;
  //  char fname[50]; /* 用于存放文件名 */
    fp = fopen("tmp.txt", "r"); /* 只供读取 */
    if (fp == NULL) /* 如果失败了 */
    {
        printf("错误！");
        exit(1); /* 中止程序 */
    }

    char buf[101];
//    fp = fopen("in.txt", "r");//打开文件
    while(fgets(buf, sizeof(buf), fp))//每次读取一行数据，直到读取失败。
    {
            fputs(buf, stdout);
//        printf("%s\n", buf); //打印该行。
    }
    fclose(fp);//关闭文件。

//    printf("123123\n");
//    char str[100];
//    while (fgets(fp, str, stdin) != NULL)
//    {
//        putchar(str[i]);
//        i++;
//    }
//    scanf("%d", &d);
//    fgets(fp , str, stdin);
//    printf("dve\n");


//    fclose(fp); /* 关闭文件 */
//    fp = NULL; /* 需要指向空，否则会指向原打开文件地址 */
    return 0;
}