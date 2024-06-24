# include<stdlib.h>
# include<stdio.h>
 //Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
 };


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *_head;
    struct ListNode *output;
    int f1=0,f2=0;
    int v, now_min=0,l1_now=32768, l2_now=32768;
//    printf("here\n");
    output = (struct ListNode*)malloc(sizeof(struct ListNode));
    output->val = 0;
    output->next = NULL;
    _head = output;
    if(l1==NULL){
        f1=1;
    }
    if(l2==NULL){
        f2=1;
    }
//    printf("HeRE\n");

    while(!(f1==1&&f2==1)){

//        printf("here1\n");
        if(f1!=1){
        l1_now = l1->val;
        }else{
            l1_now = 32768;
        }
        if(f2!=1){
        l2_now = l2->val;
        }else{
            l2_now = 32768;
        }

        if (l2_now<l1_now||f1==1){
            struct ListNode *_output;
            _output = (struct ListNode*)malloc(sizeof(struct ListNode));
            _output->val = l2_now;
            _output->next = NULL;
            output->next = _output;
            output = _output;
            if (l2->next!=NULL){
            l2 = l2->next;
            }else{
                f2 = 1;
            }
        }
        else if(l2_now>=l1_now||f2==1){
            struct ListNode *_output;
            _output = (struct ListNode*)malloc(sizeof(struct ListNode));
            _output->val = l1_now;
            _output->next = NULL;
            output->next = _output;
            output = _output;
            if (l1->next!=NULL) {
                l1 = l1->next;
            }else{
                f1 = 1;
            }
        }

//        scanf("%d\n", &v);
//        printf("l1 %d, l2 %d\n", l1_now, l2_now);
//        printf("f1 %d, f2 %d\n", f1, f2);
//        printf("min %d \n", output->val);

    }

    return _head->next;

}

struct ListNode* genlist(int i){
    struct ListNode *_a;
    struct ListNode *head;
    _a=(struct ListNode*)malloc(sizeof(struct ListNode));
    int j=0;
    _a->val = 0;
    head = _a;

//    printf("here\n");
    for(j=0;j<=i;j++){
//        printf("here2\n");
        struct ListNode *b;
        b = (struct ListNode*)malloc(sizeof(struct ListNode));
        b->val = j;
        b->next=NULL;
        _a->next = b;
        _a = b;
    }
    return head;

}

void print(struct ListNode* l1){
    struct ListNode *l;
    l = l1;
    while(l!=NULL){
        printf("%d\n", l->val);
//        printf("here\n");
        if (l->next!=NULL){
        l = l->next;
//        printf("here2\n");
        }else{
            break;
        }
    }

}


//int main(){
//struct ListNode *a;
//    struct ListNode *_b;
//    struct ListNode *x;
////    struct ListNode *head;
//    a = genlist(10);
////    a = NULL;
////    print(a);
//    _b = genlist(20);
////    _b = NULL;
////    print(_b);
//
//    x = mergeTwoLists(a, _b);
//    print(x);
//
//
//
////    a=(struct ListNode*)malloc(sizeof(struct ListNode));
////    a->val = 10;
////    //head = a;
////    printf("here");
////    struct ListNode *a2;
////    a2=(struct ListNode*)malloc(sizeof(struct ListNode));
////    a2->val =2;
////    a->next=a2;
////    printf("here");
////    struct ListNode *a3;
////    a3->val=3;
////    a2->next = a3;
////    printf("here");
//    //print(head);
//
////    a = genlist(10);
////    print(a);
////    struct ListNode *b;
////    a->val = 1;
////    a->next = b;
////    mergeTwoLists(a, b);
//    return 0;
//};