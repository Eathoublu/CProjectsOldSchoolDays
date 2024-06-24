//
// Created by 蓝一潇 on 2021/2/2.
//

//Definition for singly-linked list.
# include"stdlib.h"
# include"stdio.h"

  struct ListNode {
      int val;
    struct ListNode *next;
  };

struct ListNode* genlistv2(int i){
    struct ListNode *_a;
    struct ListNode *head;
    _a=(struct ListNode*)malloc(sizeof(struct ListNode));
    int j=0;
    _a->val = 0;
    head = _a;

//    printf("here\n");
    for(j=1;j<=i;j++){
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

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int depth = 0;
    struct ListNode *l, *h;
    l = head;
    h = head;
    if(head->next==NULL){
        return NULL;
    }
    while(l!=NULL){
        depth++;
        l = l->next;
    }
    l = h;
    if(depth==n){
        h = h->next;
    }else{
    for(int i=0;i<=depth-n-1;i++){
        if(i!=depth-n-1){
        l = l->next;}
        else{
            l->next = l->next->next;
        }
    }}
    return h;
}

void printv2(struct ListNode* l1){
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
//
//    struct ListNode *a, *h1, *p;
//    a = genlistv2(0);
////    p = a;
////    printv2(p);
//    printv2(removeNthFromEnd(a, 1));
//    return 0;
//}

