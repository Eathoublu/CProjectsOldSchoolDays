#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int v;
    struct stack * next;
}Stack;

Stack * init(){
    Stack * t = (Stack*)malloc(sizeof(Stack));
    t->next = NULL;
    t->v = 0;
}

Stack * pop(Stack * s){
    s = s->next;
    return s;
}

Stack * push(Stack * s, int element){
    Stack * t = (Stack*)malloc(sizeof(Stack));
    t->v = element;
    t->next = s;
    return t;
}

int read(Stack * s){
    return s->v;
}

int main(){
    Stack * _stack;
    _stack = init();
    _stack = push(_stack, 1);
    _stack = push(_stack, 1);
    _stack = pop(_stack);
    printf("%d", read(_stack));
}