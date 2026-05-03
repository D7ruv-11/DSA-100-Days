/*
day 53 - print binary tree vertical order

Problem: Print vertical order traversal of a binary tree.

Input:
- Number of nodes
- Level order input (-1 for NULL)

Output:
- Print vertical order traversal
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    int hd;
    struct node *left;
    struct node *right;
};

struct node* create(int data){

    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data=data;
    newnode->hd=0;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

void main() {

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);


    struct node* nodes[n];

    for(int i=0;i<n;i++){
        if(arr[i]==-1)
            nodes[i]=NULL;
        else
            nodes[i]=create(arr[i]);
    }


    for(int i=0;i<n;i++){

        if(nodes[i]!=NULL){

            int l=2*i+1;
            int r=2*i+2;

            if(l<n)
                nodes[i]->left=nodes[l];

            if(r<n)
                nodes[i]->right=nodes[r];
        }
    }


    struct node* root = nodes[0];


    struct node* q[n];
    int front=0,rear=0;

    root->hd=0;
    q[rear++]=root;


    while(front<rear){

        struct node* temp=q[front++];

        printf("%d ",temp->data);

        if(temp->left!=NULL){
            temp->left->hd=temp->hd-1;
            q[rear++]=temp->left;
        }

        if(temp->right!=NULL){
            temp->right->hd=temp->hd+1;
            q[rear++]=temp->right;
        }
    }
}
