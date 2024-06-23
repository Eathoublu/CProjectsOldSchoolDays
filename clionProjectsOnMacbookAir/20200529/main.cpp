#include<iostream>
using namespace std;

typedef struct _Node
{
    int vertex1;
    int vertex2;
    struct _Node * next;
}Node;

typedef struct _Node2
{
    int vertex;
    struct _Node2 * next;
}Node2;

typedef struct _Node1
{
    int vertex;
    int degree;
    Node2 * connected;
}Node1;

typedef struct _Queue
{
    Node1 node1;
    struct _Queue * next;
}Queue;

Node * head,* rear;
int N;
Node1 * a;
int i,j,k;
bool * visited;
Queue *start,*end;
bool * visited1;

void initiallist();
void input();
Node1 * createtable();
void DFS();
void visitchain(Node1 node1);
void BFS();
void inqueue(Node1 node1);
Queue * outqueue();
bool queueisempty();
void del();

int main()
{
    initiallist();
    input();
    a=createtable();
    DFS();
    BFS();
    del();
    return 0;
}

void initiallist()
{
    head=rear=new Node;
    head->vertex1=0;
    head->vertex2=0;
    head->next=NULL;
}

void input()
{
    cout<<"请输入顶点的个数"<<endl;
    cin>>N;
    cout<<"请输入图中所有边："<<endl;
    int x,y;
    while(1)
    {
        cin>>x;
        if(x==0)
        {
            break;
        }
        cin>>y;
        rear->next=new Node;
        rear=rear->next;
        rear->vertex1=x;
        rear->vertex2=y;
        rear->next=NULL;
        ++(head->vertex1);
    }
}

Node1 * createtable()
{
    Node1 * b=new Node1[N];
    for(i=0;i<N;++i)
    {
        b[i].vertex=0;
        b[i].degree=0;
        b[i].connected=NULL;
    }
    Node * p=head->next;
    while(p!=NULL)
    {
        if(b[p->vertex1-1].vertex==p->vertex1)
        {
            Node2 * save=b[p->vertex1-1].connected;
            b[p->vertex1-1].connected=new Node2;
            b[p->vertex1-1].connected->next=save;
            b[p->vertex1-1].connected->vertex=p->vertex2;
            ++(b[p->vertex1-1].degree);
        }
        else
        {
            b[p->vertex1-1].vertex=p->vertex1;
            b[p->vertex1-1].connected=new Node2;
            ++(b[p->vertex1-1].degree);
            b[p->vertex1-1].connected->vertex=p->vertex2;
            b[p->vertex1-1].connected->next=NULL;
        }
        if(b[p->vertex2-1].vertex==p->vertex2)
        {
            Node2 * save=b[p->vertex2-1].connected;
            b[p->vertex2-1].connected=new Node2;
            b[p->vertex2-1].connected->next=save;
            b[p->vertex2-1].connected->vertex=p->vertex1;
            ++(b[p->vertex2-1].degree);
        }
        else
        {
            b[p->vertex2-1].vertex=p->vertex2;
            b[p->vertex2-1].connected=new Node2;
            ++(b[p->vertex2-1].degree);
            b[p->vertex2-1].connected->vertex=p->vertex1;
            b[p->vertex2-1].connected->next=NULL;
        }
        p=p->next;
    }
    return b;
}

void DFS()
{
    visited=new bool[N];
    for(i=0;i<N;++i)
    {
        visited[i]=false;
    }
    cout<<"深度优先遍历：";
    visitchain(a[0]);
    cout<<endl;
}

void visitchain(Node1 node1)
{
    cout<<node1.vertex<<" ";
    visited[node1.vertex-1]=true;
    Node2 * ptrnode2=node1.connected;
    while(ptrnode2!=NULL)
    {
        if(visited[ptrnode2->vertex-1]==false)
        {
            visitchain(a[ptrnode2->vertex-1]);
        }
        ptrnode2=ptrnode2->next;
    }
}

void BFS()
{
    visited1=new bool[N];
    for(i=0;i<N;++i)
    {
        visited1[i]=false;
    }
    start=new Queue;
    end = new Queue;
    start->node1.vertex=0;
    start->node1.degree=0;
    start->node1.connected=NULL;
    start->next=NULL;
    inqueue(a[0]);
    visited1[0]=true;
    cout<<"广度优先遍历：";
    while(!queueisempty())
    {
        Queue * queue=outqueue();
        Node2 * ptr2node2=a[queue->node1.vertex-1].connected;
        delete queue;
        while(ptr2node2!=NULL)
        {
            if(visited1[ptr2node2->vertex-1]==false)
            {
                inqueue(a[ptr2node2->vertex-1]);
                visited1[ptr2node2->vertex-1]=true;
            }
            ptr2node2=ptr2node2->next;
        }
    }
    delete start;
    cout<<endl;
}

void inqueue(Node1 node1)
{
    end->next=new Queue;
    end=end->next;
    end->node1.vertex=node1.vertex;
    end->node1.degree=node1.degree;
    end->node1.connected=NULL;
    end->next=NULL;
}

Queue * outqueue()
{
    if(start->next==end)
    {
        Queue * save=end;
        end=start;
        cout<<save->node1.vertex<<" ";
        return save;
    }
    else
    {
        Queue * save=start->next;
        start->next=start->next->next;
        cout<<save->node1.vertex<<" ";
        return save;
    }
}

bool queueisempty()
{
    if(start==end)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void del()
{
    {
        Node * save=head;
        head=head->next;
        delete save;
    }
    delete a;
    delete visited;
    delete visited1;
}
