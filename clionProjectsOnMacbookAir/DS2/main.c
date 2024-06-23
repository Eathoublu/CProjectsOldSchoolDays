
// 实验二：第十题 创建人等待公交车、创建公交车运送人以及统计 使用多线程红绿灯模型以及链表队列数据结构实现 随机产生bus以及排队乘客 每辆bus能做20人

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

typedef struct Queue{
    int people;
    struct Queue *next;
    struct Queue *last;
} queue;

void * custmer_generator_1(void *);
void * custmer_generator_2(void *);
void * custmer_generator_3(void *);
void * custmer_generator_4(void *);
void * bus_generator(void *);

queue *bus1, *bus2, *bus3, *bus4, *b1, *b2, *b3, *b4;

int n_b1, n_b2, n_b3, n_b4;

int flag = 0;
int lock = 0;

int getLen(queue *head){  // 传的是指针，那就要用指针类型拿
    int len = 0;
    while (head->last != NULL) {
        head = head->last;
        len++;
    }
    return len;
}

queue * init(){
    queue *b;
    b = (queue *) malloc(sizeof(queue));
    b->people = 0;
    b->last = NULL;
    b->next = NULL;
    return b;
}


int main(){

    b1 = init();
    b2 = init();
    b3 = init();
    b4 = init();

    printf("b1%d,b2%d,b3%d,b4%d", b1->next,b2->next,b3->next,b4->next);

    bus1 = b1;
    bus2 = b2;
    bus3 = b3;
    bus4 = b4;

    pthread_t t0;
    pthread_t t1;
    pthread_t t2;
    pthread_t t3;
    pthread_t t4;

 //   printf("e\n");
    // 给每个bus创建排队的人数
    if(pthread_create(&t0, NULL, custmer_generator_1, NULL) == -1){
        puts("fail to create pthread t0");
        exit(1);
    }
 //   printf("e\n");
    if(pthread_create(&t1, NULL, custmer_generator_2, NULL) == -1){
        puts("fail to create pthread t1");
        exit(1);
    }
 //   printf("e\n");
    if(pthread_create(&t2, NULL, custmer_generator_3, NULL) == -1){
        puts("fail to create pthread t2");
        exit(1);
    }
 //   printf("e\n");
    if(pthread_create(&t3, NULL, custmer_generator_4, NULL) == -1){
        puts("fail to create pthread t3");
        exit(1);
    }

    if(pthread_create(&t4, NULL, bus_generator, NULL) == -1){
        puts("fail to create pthread t4");
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

    if(pthread_join(t2, &result) == -1){
        puts("fail to recollect t2");
        exit(1);
    }

    if(pthread_join(t3, &result) == -1){
        puts("fail to recollect t3");
        exit(1);
    }

    if(pthread_join(t4, &result) == -1){
        puts("fail to recollect t3");
        exit(1);
    }

    //统计
    printf("共发出%d辆巴士，送走%d名乘客\n", n_b3+n_b2+n_b1+n_b1+n_b4, b1->people+b2->people+b3->people+b4->people);

//    printf("Len %d %d\n", getLen(bus1), bus1->people);
//    printf("Len %d %d\n", getLen(bus2), bus2->people);
//    printf("Len %d %d\n", getLen(bus3), bus3->people);
//    printf("Len %d %d\n", getLen(bus4), bus4->people);

    return 0;
}

void * custmer_generator_1(void *a){
    srand((unsigned int)time(NULL));
    queue *node;
    while(1){
        lock = 1;
        if(flag==1){
            break;
        }

        if(rand() % 3 > 1){
        node = (queue *) malloc(sizeof(queue));
        int n = bus1->people;
        node->last = bus1;
        n++;
        node->people = n;
        bus1->next = node;
        bus1 = node;
//    bus1->people = 1;
//    bus1->next->last = bus1;
            printf("第1个巴士站台迎来了第%d个乘客\n", n);
        lock =0;
        }
    }
}

void * custmer_generator_2(void *a){
    srand((unsigned int)time(NULL));
    queue *node;
    while(1){
        lock =1;
        if(flag==1){
            break;
        }
        if(rand() % 4 > 2){
        node = (queue *) malloc(sizeof(queue));
        int n = bus2->people;
        n++;
        node->last = bus2;
        node->people = n;
        bus2->next = node;
        bus2 = node;
//    bus2->next->people = 1;
//    bus2->next->last = bus2;
        printf("第2个巴士站台迎来了第%d个乘客\n", n);
        lock =0;}
    }
}
void * custmer_generator_3(void *a){
    srand((unsigned int)time(NULL));
    queue *node;
    while(1){
        lock =1;
        if(flag==1){
            break;
        }
        if(rand() % 6 > 4){
        node = (queue *) malloc(sizeof(queue));
            int n = bus3->people;
            n++;
         //   printf("%d\n", n);
        node->last = bus3;
        node->people = n;
        bus3->next = node;
        bus3 = node;
//    bus3->next->people = 1;
//    bus3->next->last = bus3;
            printf("第3个巴士站台迎来了第%d个乘客\n", n);
        lock =0;}
    }
}
void * custmer_generator_4(void *a){
    srand((unsigned int)time(NULL));
    queue *node;
    while(1){
        lock =1;
        if(flag==1){
            break;
        }
        if(rand() % 5 > 4){
        node = (queue *) malloc(sizeof(queue));
        int n = bus4->people;
        n++;
        node->last = bus4;
        node->people = n;
        bus4->next = node;
        bus4 = node;
//    bus3->next->people = 1;
//    bus3->next->last = bus3;
            printf("第4个巴士站台迎来了第%d个乘客\n", n);
        lock =0;}
    }
}

void * bus_generator(void * a){
//    flag = 1;
    srand((unsigned int)time(NULL));
    for(int j=1;j<=100;j++){
      //  while(lock==1){};
    if(rand()>0){
        int bus_num = rand() % 4;
        bus_num++;
        if (bus_num == 1){
            n_b1++;
            for(int i = 1;i<=20;i++){
                if(b1->next){
                    b1 = b1->next;
                }else{
                    break;
                }

            }
            printf("第%d辆%d号巴士送走了乘客，总共送走乘客%d名\n", n_b1, bus_num, b1->people);
        }else if (bus_num == 2){
            n_b2++;
            for(int i =1;i<=20;i++){
                if(b2->next){
                    b2 = b2->next;
                }else{
                    break;
                }
            }
            printf("第%d辆%d号巴士送走了乘客，总共送走乘客%d名\n", n_b2, bus_num, b2->people);
        }else if(bus_num == 3){
            n_b3++;
            for(int i=1;i<=20;i++){
                if(b3->next){
                    b3 = b3->next;
                }else{
                    break;
                }
            }
            printf("第%d辆%d号巴士送走了乘客，总共送走乘客%d名\n", n_b3, bus_num, b3->people);
        }else {
            n_b4++;
            for(int i = 1;i<=20;i++){
                if(b4->next){
                    b4 = b4->next;
                }else{
                    break;
                }
            }
            printf("第%d辆%d号巴士送走了乘客，总共送走乘客%d名\n", n_b4, bus_num, b4->people);
        }
    }
    }
    flag = 1;

}

