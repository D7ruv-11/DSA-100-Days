/*
day 62 - graph representation using adjacency list

Problem: Represent a graph using adjacency list.

Input:
- number of vertices n
- number of edges e
- e pairs of vertices

Output:
- Print adjacency list
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void main() {

    int n,e;
    scanf("%d %d",&n,&e);

    struct node* adj[n];

    for(int i=0;i<n;i++)
        adj[i]=NULL;


    for(int i=0;i<e;i++){

        int u,v;
        scanf("%d %d",&u,&v);

        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=v;
        newnode->next=adj[u];
        adj[u]=newnode;

        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=u;
        newnode->next=adj[v];
        adj[v]=newnode;
    }


    for(int i=0;i<n;i++){

        printf("%d: ",i);

        struct node* temp=adj[i];

        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }

        printf("\n");
    }
}
