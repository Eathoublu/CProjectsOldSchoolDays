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

Stack * _stack;
int edge[10000][2] = {0};
int vertex[10000] = {0};
int v_num = 0;
int e_num = 0;

int check_is_connected_when_cut(int _v){
    // when v!=layer
    for(int i=1;i<=e_num;i++){
        if(edge[i][0] == read(_stack)&&edge[i][0]!=_v&&edge[i][1]!=_v&&vertex[edge[i][1]]==0){
            _stack = push(_stack, edge[i][1]);
            vertex[edge[i][1]] = 1;
            check_is_connected_when_cut(_v);
        }
    }

//    for(int i=1;i<=v_num;i++){
//        printf("%d ",vertex[i]);
//    }
//    printf("\n");

    _stack = pop(_stack);
}



int main(){

    _stack = init();

    printf("请输入节点个数：");
    scanf("%d", &v_num);
    printf("请输入边的个数：");
    scanf("%d", &e_num);
    printf("请输入边：\n");
    for(int i = 0;i<e_num;i++){
        scanf("%d %d",&edge[2*i+1][0],&edge[2*i+1][1]);
        edge[2*i+2][0] = edge[2*i+1][1];
        edge[2*i+2][1] = edge[2*i+1][0];
    }
    e_num = e_num * 2;
    //尝试去掉每一个节点，看是否还是连通图。检查连通图的算法采用深搜。
    printf("下面是关节点：\n");
    for(int _v = 1;_v<=v_num;_v++) {

        //printf("_v %d\n", _v);

        if (_v == 1) { //非常大的bug，当1时，只执行了前面的
            vertex[2] = 1;
            _stack = push(_stack, 2);
            check_is_connected_when_cut(_v);
        }else{
        _stack = push(_stack, 1);
        vertex[1] = 1;
        check_is_connected_when_cut(_v);
        }
        int visited = 0;
        for (int i = 1; i <= v_num; i++) {
            if (vertex[i] == 1) {
                visited++;
            }
        }
        //printf("visited%d\n", visited);
        if (visited != v_num - 1) {
            printf("%d\n", _v);
        }

        for(int i=1;i<=v_num;i++){
            vertex[i] = 0;
        }


//        for(int i=1;i<=v_num;i++){
//            printf("%d ",vertex[i]);
//        }
//        printf("\n");

    }
}

