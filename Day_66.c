/*
day 66 - cycle detection in directed graph

Problem: Detect cycle in directed graph using DFS.

Input:
- n vertices
- e edges

Output:
- Print "Cycle Detected" or "No Cycle"
*/
#include <stdio.h>

int visited[100],rec[100];

int dfs(int v,int n,int adj[100][100]){

    visited[v]=1;
    rec[v]=1;

    for(int i=0;i<n;i++){

        if(adj[v][i]==1){

            if(!visited[i]){
                if(dfs(i,n,adj))
                    return 1;
            }
            else if(rec[i]){
                return 1;
            }
        }
    }

    rec[v]=0;
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
    }


    int flag=0;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(dfs(i,n,adj)){
                flag=1;
                break;
            }
        }
    }


    if(flag)
        printf("Cycle Detected");
    else
        printf("No Cycle");
}
