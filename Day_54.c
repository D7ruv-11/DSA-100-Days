/*
day 54 - zigzag traversal of binary tree

Problem: Print zigzag (spiral) traversal of binary tree.

Input:
- Number of nodes
- Level order input (-1 for NULL)

Output:
- Print zigzag traversal
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create(int data){

    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=data;
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


    struct node* root=nodes[0];


    struct node* q[n];
    int front=0,rear=0;

    q[rear++]=root;

    int leftToRight=1;


    while(front<rear){

        int size=rear-front;

        int tempArr[size];


        for(int i=0;i<size;i++){

            struct node* temp=q[front++];

            tempArr[i]=temp->data;

            if(temp->left!=NULL)
                q[rear++]=temp->left;

            if(temp->right!=NULL)
                q[rear++]=temp->right;
        }


        if(leftToRight){
            for(int i=0;i<size;i++)
                printf("%d ",tempArr[i]);
        }
        else{
            for(int i=size-1;i>=0;i--)
                printf("%d ",tempArr[i]);
        }

        leftToRight=!leftToRight;
    }
}
