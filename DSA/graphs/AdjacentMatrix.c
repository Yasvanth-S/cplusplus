#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct graph
{
    int v; //Vertices
    int e; //Edges
    int ** adj; //To point 2D Dynamic Array
}Graph;

Graph * g = NULL; //Global Variable
int vertix[100];

int getindex(int element, int vertix[])
{
    for(int i = 0; i<g->v; i++)
    {
        if(element == vertix[i])
        {
            return i;
        }
    }
    return 0;
}

void adjacencymatrix()
{
    g = (Graph *)malloc(sizeof(Graph));
    printf("Number of Vertices\n");
    scanf("%d",&g->v);
    printf("Enter all the Vertices\n");
    for(int i = 0; i<g->v;i++)
    {
        scanf("%d",&vertix[i]);
    }
    printf("Number of Edjes\n");
    scanf("%d",&g->e);
    g->adj = (int **)malloc(sizeof(int*)*g->v);
    for(int i = 0; i < g->v; i++)
    {
        g->adj[i]=(int*)malloc(sizeof(int)*g->v);
    }
    for(int i = 0; i < g->v; i++)
    {
        for(int j = 0; j < g->v; j++)
        {
            g->adj[i][j]=0;
        }
    }
    for(int i = 0; i< g->e;i++)
    {
        int v=0,u=0;
        printf("Enter Source,Dest\n");
        scanf("%d %d",&u,&v);
        g->adj[getindex(u,vertix)][getindex(v,vertix)]=1;
        g->adj[getindex(v,vertix)][getindex(u,vertix)]=1;
    }
}
 void printgraph()
{
    for(int i = 0; i<g->v;i++)
    {
        printf("The Adjacent for %d\n",vertix[i]);
        for(int j = 0; j<g->v; j++)
        {
            if(g->adj[i][j]==1)
                printf("%d ", vertix[j]);
        }
        printf("\n");
    }
}

int main()
{
    adjacencymatrix();
    printgraph();
    return 0;
}


