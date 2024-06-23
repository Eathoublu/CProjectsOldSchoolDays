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
pthread_mutex_t mut; //����������
void *thread1(void *arg)  //�߳�1���к���
{
    char str[100];
	fd = open("log.txt", O_CREAT | O_RDWR|O_APPEND, S_IRUSR | S_IWUSR);
//��д�򿪣�ÿ��дʱ���ӵ��ļ���β�ˣ������ļ��������򴴽������пɶ�ȡ�Ϳ�д���Ȩ��
	sem_t* sems = (sem_t *)arg;  //�̲߳����������������ź�������
	while(1)
	{
	    printf(" shu ru:\n");
	    fgets(str,100,stdin);
	    fd = open("log.txt",O_RDWR|O_APPEND);

	    write(fd,str,strlen(str));
	    close(fd);

	    sem_post(sems);  //���ź�����1
	    sleep(20);
	}
}
void *thread2(void *arg)  //�߳�2���к���
{
    sem_t* sems = (sem_t *)arg;//�̲߳����������������ź�������
    char rd[1024];
    int len=0;
    char str2[100];
    int i,j=0;
    int count=0;
static int cnt =5;
	while(cnt--)
	{
		sem_wait(sems);  //�ȴ��ź���
		pthread_mutex_lock(&mut); //ʹ�û���������ʼʹ��value����
		//value = 0;
		i=0;
		j=0;
		printf(" 123123\n");
		    fd = fopen("log.txt",O_RDWR);
		    if(fd)
		{
		    	len=read(fd,rd,1024);
		    	rd[len]='\0';

		    	while(rd[i]!='\0')	//ѭ������
			{
				if(rd[i]!='\n')//������ɺ��»س�
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
		//pthread_mutex_unlock(&mut); //����������
		sleep(20);
	}
}
void *thread3(void *arg)  //�߳�3���к���
{
    char *warn1="warning!value=1!time is :\n\0";
   // FILE *fp = NULL;
    sem_t* sems = (sem_t *)arg;//�̲߳����������������ź�������
	while(1)
	{
		sem_wait(sems);  //�ȴ��ź���
	 	pthread_mutex_lock(&mut); //ʹ�û���������ʼʹ��value����
		if( value==1)
		{
			fd = fopen("alarm.txt",O_RDWR|O_APPEND);
			if(fd)
			{
				write(fd,warn1,strlen(warn1));
			/*	time_t timep;
                struct tm *p;
                fputs("����:",fp);
                fprintf(fp,"%d",p->tm_year+1900);    //��ȡ��
                fputs(":",fp);
                fprintf(fp,"%d",p->tm_mon+1);        //��ȡ��
                fputs(":",fp);
                fprintf(fp,"%d",p->tm_mday);        //��ȡ��
                fputs("      ",fp);
                fputs("ʱ��:",fp);
                fprintf(fp,"%d",p->tm_hour+8);        //��ȡʱ
                fputs(":",fp);
                fprintf(fp,"%d",p->tm_min);            //��ȡ��
                fputs(":",fp);
                fprintf(fp,"%d",p->tm_sec);            //��ȡ��
                fputs("      ",fp);
                fputs("�����ǽ���ĵ� ",fp);
                fprintf(fp,"%d",p->tm_yday);        //��ȡ����ĵڼ���
                fputs(" ��\n",fp);    //����
                fputs("\r\n",fp);*/
				close(fd);
			}
		}
		sem_wait(sems);
		pthread_mutex_unlock(&mut); //����������
		printf("thread3 : value = %d\n", value);
		sleep(20);
	}
}

int main (int argc, char **argv)
 {

	pthread_t t1, t2 ,t3;   /* �����߳�ͬ���ź�������ʼֵΪ0 */
	if(sem_init(&sems, 0, 0) < 0)
	    printf("sem_init error");
	//    while(1)
   // {
	pthread_create(&t1, NULL, thread1, &sems);  //�����߳�1
	pthread_create(&t2, NULL, thread2, &sems);  //�����߳�2
	pthread_create(&t3, NULL, thread3, &sems);  //�����߳�3

	pthread_join(t1, NULL);  //�ȴ��߳�1ִ�н���
	pthread_join(t2, NULL);  //�ȴ��߳�2ִ�н���
	pthread_join(t3, NULL);  //�ȴ��߳�3ִ�н���
	//}
	sem_destroy(&sems);  //�����ź�������
	return 0;
}
