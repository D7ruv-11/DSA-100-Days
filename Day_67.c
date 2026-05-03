/*
day 67 - topological sort (dfs)

Problem: Perform topological sort using DFS.

Input:
- n vertices
- e edges

Output:
- Print topological order
*/
#include <stdio.h>

int visited[100];
int stack[100];
int top=-1;

void dfs(int v,int n,int adj[100][100]){

    visited[v]=1;

    for(int i=0;i<n;i++){
        if(adj[v][i]==1 && !visited[i])
            dfs(i,n,adj);
    }

    stack[++top]=v;
}

void main() {

    int n,e;
    scanf("%d %d",&n,&e);

    int adj[100][100]={0};

    for(int i=0;i<e;i++){

        int u,v;
        scanf("%d %d",&u,&v);

        adj[u][v]=1;
    }


    for(int i=0;i<n;i++){
        if(!visited[i])
            dfs(i,n,adj);
    }


    while(top!=-1)
        printf("%d ",stack[top--]);
}
