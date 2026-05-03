/*
day 61 - graph representation using adjacency matrix

Problem: Represent a graph using adjacency matrix.

Input:
- number of vertices n
- number of edges e
- e pairs of vertices

Output:
- Print adjacency matrix
*/
#include <stdio.h>

void main() {

    int n,e;
    scanf("%d %d",&n,&e);

    int adj[n][n];


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj[i][j]=0;
        }
    }


    for(int i=0;i<e;i++){

        int u,v;
        scanf("%d %d",&u,&v);

        adj[u][v]=1;
        adj[v][u]=1;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
}
