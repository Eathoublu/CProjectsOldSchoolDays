//
// Created by 蓝一潇 on 2018/12/31.
//

#include <iostream>
#include <string>
using namespace std;

#define MAX_VERTEX_NUM 13

//邻接表存储结构
typedef struct ArcNode{
    int adjvex;
    ArcNode *nextarc;
}ArcNode;

typedef struct VNode{
    string data;
    ArcNode* firstarc;
}VNode,AdjList[MAX_VERTEX_NUM];

typedef struct{
    AdjList vertices;
    int vexnum, arcnum;
}ALGraph;

//返回u在图中的位置
int LocateVex(ALGraph G, string u)
{
    for(int i=0; i<G.vexnum; i++)
        if(G.vertices[i].data==u)
            return i;
    return -1;
}

//构造图
void CreateDG(ALGraph &G)
{
    string v1, v2;
    int i, j, k;
    cout<<"请输入顶点数和边数：";
    cin>>G.vexnum>>G.arcnum;

    cout<<"请输入顶点：";
    for(i=0; i<G.vexnum; i++)
    {
        cin>>G.vertices[i].data;
        G.vertices[i].firstarc=NULL;
    }

    cout<<"请输入边："<<endl;
    for(k=0; k<G.arcnum; k++)
    {
        cin>>v1>>v2;
        i=LocateVex(G, v1);
        j=LocateVex(G, v2);

        //无向图
        ArcNode *arc=new ArcNode;
        arc->adjvex=j;
        arc->nextarc=G.vertices[i].firstarc;
        G.vertices[i].firstarc=arc;

        arc=new ArcNode;
        arc->adjvex=i;
        arc->nextarc=G.vertices[j].firstarc;
        G.vertices[j].firstarc=arc;
    }

}

//求割点
int count ;
int visited[MAX_VERTEX_NUM];
int low[MAX_VERTEX_NUM];

//从第v0个顶点出发深搜，查找并输出关节点（割点）
void DFSArticul(ALGraph G, int v0)
{
    int min, w;
    ArcNode *p;
    visited[v0]=min=++count;//v0是第count个访问的顶点，min的初值为visited[v0]，即v0的访问次序

    for(p=G.vertices[v0].firstarc; p ; p=p->nextarc)
    {
        w=p->adjvex;
        if(visited[w]==0)//w未曾访问，是v0的孩子
        {
            DFSArticul(G, w);//从第w个顶点出发深搜，查找并输出关节点（割点），返回前求得low[w]
            if(low[w]<min)//如果v0的孩子节点w的low[]小，说明孩子节点还与其他节点（祖先）相邻
                min=low[w];
            if(low[w]>=visited[v0])//v0的孩子节点w只与v0相连，则v0是关节点（割点）
                cout<<G.vertices[v0].data<<" ";
        }
        else if(visited[w]<min)//w已访问，则w是v0生成树上祖先，它的访问顺序必小于min
            min=visited[w];
    }

    low[v0]=min;//low[v0]取三者最小值

}

void FindArticul(ALGraph G)
{
    int i, v;
    ArcNode *p;
    count=1;
    visited[0]=1;//从0号节点开始
    for(i=1; i<G.vexnum; i++)
        visited[i]=0;
    p=G.vertices[0].firstarc;
    v=p->adjvex;
    DFSArticul(G, v);
    if(count<G.vexnum)
    {
        cout<<G.vertices[0].data<<" ";
        while(p->nextarc)
        {
            p=p->nextarc;
            v=p->adjvex;
            if(visited[v]==0)
                DFSArticul(G, v);
        }
    }
}

int main()
{
    ALGraph g;
    CreateDG(g);

    cout<<"割点如下: "<<endl;
    FindArticul(g);
    cout<<endl;
}

