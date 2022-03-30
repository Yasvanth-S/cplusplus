#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <queue>
using namespace std;

typedef struct AdjacentList
{
    int vn;
    struct AdjacentList * next;
}AL;

typedef struct Graph
{
    int v; //number of vertices
    int e; //number of edges
    AL * array;
}graph;

graph * g = NULL;

void  CreateGraph()
{
    g = (graph*)malloc(sizeof(graph));
    printf("Enter number of vertices ");
    scanf("%d", &g->v);
    printf("Enter number of edjes ");
    scanf("%d",&g->e);
    g->array = (AL*)malloc(sizeof(AL)*g->v);
    for(int i=0; i<g->v;i++)
    {
        printf("Enter the vertices ");
        scanf("%d",&g->array[i].vn);
        g->array[i].next = NULL;
    }
}

AL * CreateNode()
{
    AL * temp;
    temp = (AL*)malloc(sizeof(AL));
    temp->vn = 0;
    temp->next = NULL;
    return temp;
}

int getIdx(int element)
{
    for(int i = 0; i<g->v;i++)
    {
        if(g->array[i].vn == element)
            return i;
    }
    return 0;
}


void AdjacentListRepGraph()
{
    int U,V;
    CreateGraph();
    for(int i = 0; i< g->e;i++)
    {
        printf("Enter pair of vertices ");
        scanf("%d %d",&U,&V);

        AL * temp1 = CreateNode();
        temp1->next = g->array[getIdx(U)].next;
        g->array[getIdx(U)].next = temp1;
        temp1->vn = V;

        AL * temp2 = CreateNode();
        temp2->next = g->array[getIdx(V)].next;
        g->array[getIdx(V)].next = temp2;
        temp2->vn = U;
    }
}

void PrintGraph()
{
    for(int i = 0; i<g->v;i++)
    {
        printf("The Adjacent vertices of %d is ",g->array[i].vn);
        AL * th = g->array[i].next;
        while(th != NULL)
        {
            printf("%d ",th->vn);
            th = th->next;
        }
        printf("\n");
    }
}

void BreadthFirstSearch(AL * temp)
{
    int i = 0;
    int visited[g->v];
    for(i = 0; i<g->v;i++)
    {
        visited[i] = 0;
    }

    queue<AL*> q;
    AL*th = temp;
    printf("%d ",g->array[0].vn);
    visited[getIdx(th->vn)] = 1;
    while(1)
    {
        while(th!=NULL)
        {
            if(visited[getIdx(th->vn)] == 0)
            {
                q.push(&g->array[getIdx(th->vn)]);
                visited[getIdx(th->vn)] = 1;
                printf("%d ",th->vn);
            }
            th = th ->next;
        }
        if(q.empty())
            return;
        th = q.front();
        q.pop();
    }
}

int main()
{
    AdjacentListRepGraph();
    PrintGraph();
    BreadthFirstSearch(g->array);
    return 0;
}


