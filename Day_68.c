/*
day 68 - topological sort (kahn's algorithm)

Problem: Perform topological sort using BFS (Kahn’s Algorithm).

Input:
- n vertices
- e edges

Output:
- Print topological order
*/
#include <stdio.h>

void main() {

    int n,e;
    scanf("%d %d",&n,&e);

    int adj[100][100]={0};
    int indegree[100]={0};

    for(int i=0;i<e;i++){

        int u,v;
        scanf("%d %d",&u,&v);

        adj[u][v]=1;
        indegree[v]++;
    }

    int q[100];
    int front=0,rear=0;

    for(int i=0;i<n;i++){
        if(indegree[i]==0)
            q[rear++]=i;
    }

    while(front<rear){

        int v=q[front++];

        printf("%d ",v);

        for(int i=0;i<n;i++){

            if(adj[v][i]==1){
                indegree[i]--;

                if(indegree[i]==0)
                    q[rear++]=i;
            }
        }
    }
}
