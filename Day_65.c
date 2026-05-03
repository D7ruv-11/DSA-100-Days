/*
day 65 - cycle detection in undirected graph (dfs)

Problem: Detect cycle in an undirected graph using DFS.

Input:
- n vertices
- e edges

Output:
- Print "Cycle Detected" or "No Cycle"
*/
#include <stdio.h>

int visited[100];

int dfs(int v,int parent,int n,int adj[100][100]){

    visited[v]=1;

    for(int i=0;i<n;i++){

        if(adj[v][i]==1){

            if(!visited[i]){
                if(dfs(i,v,n,adj))
                    return 1;
            }
            else if(i!=parent){
                return 1;
            }
        }
    }

    return 0;
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


    if(dfs(0,-1,n,adj))
        printf("Cycle Detected");
    else
        printf("No Cycle");
}
