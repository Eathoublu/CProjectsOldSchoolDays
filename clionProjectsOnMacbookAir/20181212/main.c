#include <stdio.h>
#include <nameser.h>
/*
 * 将表头拼接到len-N的位置
 * 将将表尾拼接到第M+1个位置
 * 将第N个位置设为表头
 * 将第M个位置设为表尾
 */

typedef struct List{
    int element;
    struct List *next;
} LinkList;

void print(LinkList *head){  // 传的是指针，那就要用指针类型拿
    int i = 0;
    while (head->next != NULL) {
       // head = head->next;
        printf("%d  ", head->element);
        head = head->next;
        i++;
        if (i>20){
            break;
        }
    }
    printf("%d  ", head->element);
    printf("\n");
}

LinkList *exchange(LinkList *head, int M, int N){
    LinkList * new_head;
    LinkList * o_head = head;
    LinkList * noM;
    int len = getLen(head);
    for(int i=1;i<=M;i++){
        head = head->next;
    }
    noM = head;
//    printf("%d ", noM->element);


    head = o_head;

    for(int i = 0;i<=len-N;i++){
        head = head->next;
    }

    new_head = head;
//    printf("%d ", new_head->element);

    head = o_head;

    for(int i=1;i<=len;i++){
        head = head->next;
    }

   // printf("%d ", head->element); // 10
    head->next = noM->next;

    head = o_head;
//    print(head);

    for(int i=0;i<=len-N-1;i++){
        head = head->next;
    }

    //printf("%d ", head->element); //8
    head->next = o_head->next; //此时head接到原先的第一个上面

    head = o_head;
//    print(head);

    for(int i=1;i<=M;i++){
        head = head->next;
    }

    head->next = NULL;

    head = o_head;

//    print(head);

//    for(int i = 0;i<=len-N;i++){
//        head = head->next;
//    }
//    for (int i = 1;i<=len-N;i++){
//        head = head->next;
//    }
//    LinkList * nolenN = head->next;

//    for (int i = 0; i<=2;i++){
//
//    }
//    printf("%d ", len);
//    printf("%d ", nolenN->element); //9
//    printf("%d ", no1->element);
//    head = o_head;
//    head = o_head;
//    for (int i = 1;i<=M;i++){
//        head = head->next;
//        printf("%d ", head->element);
//    }
//    printf("%d ",head->element);

//    head->next = nolenN;
//    LinList * last;
//    head = o_head;
//    for (int i = 1;i<=len;i++){
//        head = head->next;
//    }
////    last = head;
//    head->next = nolenN;
//
//    LinkList * noM = head;
//    printf("%d ", noM->element);

//    head->next =
//    LinkList * last;
//    head = o_head;
//    for (int i = 1;i<=len;i++){
//        head = head->next;
//    }
//    last = head;
//    head = o_head;
//    printf("%d ", last->element);
//    printf("%d ", noM->element); //2
    return new_head;
}

int getLen(LinkList *head){  // 传的是指针，那就要用指针类型拿
    int len = 0;
    while (head->next != NULL) {
        head = head->next;
        len++;
    }
    return len;
}

LinkList *creat(int n) {
    LinkList *head, *node, *end; //定义头节点，普通节点，尾部节点；
    head = (LinkList *) malloc(sizeof(LinkList)); //分配地址
    end = head;         //若是空链表则头尾节点一样
    for (int i = 0; i < n; i++) {
        node = (LinkList *) malloc(sizeof(LinkList));
        scanf("%d", &node->element);
        end->next = node;  // 将end向后移动一位
        end = node;
        printf("请输入下一个元素\n");
    }
    end->next = NULL;//结束创建
    return head;
}

int main() {
    printf("输入总个数：\n");
    int num;
    scanf("%d", &num);
    printf("请输入链表元素\n");
    LinkList *head;  //needs to be link list point.
    head = creat(num);
    int M;
    int N;
    printf("请输入M，N\n");
    scanf("%d\n%d", &M, &N);



    // this can output
    printf("这是交换了顺序的链表\n");
//    print(head);
    head = exchange(head,M,N);
    printf("\n");

    print(head);


        return 0;

}