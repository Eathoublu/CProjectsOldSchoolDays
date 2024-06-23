#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <errno.h>
#include <unistd.h>
#define MAX 10

// author: 20174899 蓝一潇 电子 1701
int VALUE = 1;

void *thread1(void *arg){
    printf("Enter thread 1\n");
    sem_t *sems = (sem_t *) arg;
    for (int i=0;i<MAX;i++) {
        sem_post(sems);
    }
}

void *thread2(void *arg){
    printf("Enter thread 2\n");
    sem_t *sems = (sem_t *) arg;
    static int cnt = 10;

    FILE* fp = NULL;
    errno_t eResult;
    fopen_s(&fp, "prog.txt", "a+");

    while (1){
        sem_wait(sems);
        //printf("Get sems.\n");
        //printf("thread2:%d"%(a));
        fputs("thread2: value=%d \n", VALUE, fp);

        sleep(2);
    }
}

void *thread3(void *arg) {
    printf("Enter thread 3\n");
    sem_t *sems = (sem_t *) arg;
    static int cnt = 10;

    FILE *fp = NULL;
    errno_t eResult;
    fopen_s(&fp, "prog.txt", "a+");
    while (1) {
        sem_wait(sems);

        VALUE += 5;
        printf("thread3: value=%ld \n", VALUE);
        fputs("thread3: value=%ld \n", VALUE, fp)
        sleep(4);


    }
}

int main(){
    sem_t _sems;
    pthread_t t1, t2, t3;
    if (sem_init(&_sems, 0, 0) < 0) {
        printf("sem_init error\n");
    }
    pthread_create(&t1, NULL, thread1, &_sems);
    pthread_create(&t2, NULL, thread2, &_sems);
    pthread_create(&t3, NULL, thread3, &_sems);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    sem_destroy(&_sems);
    return 0;
}


/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <semaphore.h>

sem_t bin_sem;
void *thread_function1(void *arg)
{
    printf("thread_function1--------------sem_wait\n");
    sem_wait(&bin_sem);
    printf("sem_wait\n");
    while (1)
    {
        printf("th1 running!\n");
        sleep(1);
    }
}

void *thread_function2(void *arg)
{
    printf("thread_function2--------------sem_post\n");
    sem_post(&bin_sem);
    printf("sem_post\n");
    while (1)
    {
        printf("th2 running!\n");
        printf("VALUR %d \n", bin_sem);
        sleep(1);
    }
}
int main()
{
    int res;
    pthread_t a_thread;
    void *thread_result;

    res = sem_init(&bin_sem, 0, 0);
    if (res != 0)
    {
        perror("Semaphore initialization failed");
    }
    printf("sem_init\n");
    res = pthread_create(&a_thread, NULL, thread_function1, NULL);
    if (res != 0)
    {
        perror("Thread creation failure");
    }
    printf("thread_function1\n");
    sleep(5);
    printf("sleep\n");
    res = pthread_create(&a_thread, NULL, thread_function2, NULL);
    if (res != 0)
    {
        perror("Thread creation failure");
    }
    while (1)
    {
        printf("running !\n");
        sleep(5);
    }
}

*/