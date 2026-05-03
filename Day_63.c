/*
day 63 - depth first search (dfs)

Problem: Perform DFS traversal of a graph.

Input:
- n vertices
- e edges
- adjacency matrix

Output:
- Print DFS traversal
*/
#include <stdio.h>

int visited[100];

void dfs(int v,int n,int adj[100][100]){

    printf("%d ",v);
    visited[v]=1;

    for(int i=0;i<n;i++){
        if(adj[v][i]==1 && !visited[i])
            dfs(i,n,adj);
    }
}

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


    dfs(0,n,adj);
}
