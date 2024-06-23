#include <unistd.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <string.h>
#include <time.h>
int value=0;
FILE *fd;
sem_t sems;
pthread_mutex_t mut; //互斥锁变量
void *thread1(void *arg)  //线程1运行函数
{
    char str[100];
	fd = open("log.txt", O_CREAT | O_RDWR|O_APPEND, S_IRUSR | S_IWUSR);
//读写打开，每次写时都加到文件的尾端，若该文件不存在则创建它；有可读取和可写入的权限
	sem_t* sems = (sem_t *)arg;  //线程参数，传进来的是信号量变量
	while(1)
	{
	    printf(" shu ru:\n");
	    fgets(str,100,stdin);
	    fd = open("log.txt",O_RDWR|O_APPEND);

	    write(fd,str,strlen(str));
	    close(fd);

	    sem_post(sems);  //将信号量加1
	    sleep(20);
	}
}
void *thread2(void *arg)  //线程2运行函数
{
    sem_t* sems = (sem_t *)arg;//线程参数，传进来的是信号量变量
    char rd[1024];
    int len=0;
    char str2[100];
    int i,j=0;
    int count=0;
static int cnt =5;
	while(cnt--)
	{
		sem_wait(sems);  //等待信号量
		pthread_mutex_lock(&mut); //使用互斥锁，开始使用value变量
		//value = 0;
		i=0;
		j=0;
		printf(" 123123\n");
		    fd = fopen("log.txt",O_RDWR);
		    if(fd)
		{
		    	len=read(fd,rd,1024);
		    	rd[len]='\0';

		    	while(rd[i]!='\0')	//循环输入
			{
				if(rd[i]!='\n')//输入完成后按下回车
				{
					str2[j]=rd[i];
					j++;
				}
				else if(rd[i]=='\n')
				{
					str2[j]='\0';
					j=0;
					if (strcmp(str2,"hello")==0)
					{count++;}
				}
					i++;
			}
			close(fd);
		}
		if(count>=3)
		{
			value=1;
			sem_post(sems);
		}
		pthread_mutex_unlock(&mut);
		count=0;
		//sem_wait(sems);
		printf(" 321321\n");
		//pthread_mutex_unlock(&mut); //互斥锁解锁
		sleep(20);
	}
}
void *thread3(void *arg)  //线程3运行函数
{
    char *warn1="warning!value=1!time is :\n\0";
   // FILE *fp = NULL;
    sem_t* sems = (sem_t *)arg;//线程参数，传进来的是信号量变量
	while(1)
	{
		sem_wait(sems);  //等待信号量
	 	pthread_mutex_lock(&mut); //使用互斥锁，开始使用value变量
		if( value==1)
		{
			fd = fopen("alarm.txt",O_RDWR|O_APPEND);
			if(fd)
			{
				write(fd,warn1,strlen(warn1));
			/*	time_t timep;
                struct tm *p;
                fputs("日期:",fp);
                fprintf(fp,"%d",p->tm_year+1900);    //获取年
                fputs(":",fp);
                fprintf(fp,"%d",p->tm_mon+1);        //获取月
                fputs(":",fp);
                fprintf(fp,"%d",p->tm_mday);        //获取日
                fputs("      ",fp);
                fputs("时间:",fp);
                fprintf(fp,"%d",p->tm_hour+8);        //获取时
                fputs(":",fp);
                fprintf(fp,"%d",p->tm_min);            //获取分
                fputs(":",fp);
                fprintf(fp,"%d",p->tm_sec);            //获取秒
                fputs("      ",fp);
                fputs("今天是今年的第 ",fp);
                fprintf(fp,"%d",p->tm_yday);        //获取今年的第几天
                fputs(" 天\n",fp);    //换行
                fputs("\r\n",fp);*/
				close(fd);
			}
		}
		sem_wait(sems);
		pthread_mutex_unlock(&mut); //互斥锁解锁
		printf("thread3 : value = %d\n", value);
		sleep(20);
	}
}

int main (int argc, char **argv)
 {

	pthread_t t1, t2 ,t3;   /* 创建线程同步信号量，初始值为0 */
	if(sem_init(&sems, 0, 0) < 0)
	    printf("sem_init error");
	//    while(1)
   // {
	pthread_create(&t1, NULL, thread1, &sems);  //创建线程1
	pthread_create(&t2, NULL, thread2, &sems);  //创建线程2
	pthread_create(&t3, NULL, thread3, &sems);  //创建线程3

	pthread_join(t1, NULL);  //等待线程1执行结束
	pthread_join(t2, NULL);  //等待线程2执行结束
	pthread_join(t3, NULL);  //等待线程3执行结束
	//}
	sem_destroy(&sems);  //销毁信号量变量
	return 0;
}
