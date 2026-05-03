/*
day 64 - breadth first search (bfs)

Problem: Perform BFS traversal of a graph.

Input:
- n vertices
- e edges
- adjacency matrix

Output:
- Print BFS traversal
*/
#include <stdio.h>

void main() {

    int n,e;
    scanf("%d %d",&n,&e);

    int adj[100][100]={0};

    for(int i=0;i<e;i++){

        int u,v;
        scanf("%d %d",&u,&v);

        adj[u][v]=1;
        adj[v][u]=1;
    }


    int visited[100]={0};
    int q[100];

    int front=0,rear=0;

    q[rear++]=0;
    visited[0]=1;


    while(front<rear){

        int v=q[front++];

        printf("%d ",v);

        for(int i=0;i<n;i++){

            if(adj[v][i]==1 && !visited[i]){
                q[rear++]=i;
                visited[i]=1;
            }
        }
    }
}
