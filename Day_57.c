/*
day 57 - mirror binary tree

Problem: Convert a binary tree into its mirror.

Input:
- Number of nodes
- Level order input (-1 for NULL)

Output:
- Print level order of mirrored tree
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

void mirror(struct node* root){

    if(root==NULL)
        return;

    struct node* temp=root->left;
    root->left=root->right;
    root->right=temp;

    mirror(root->left);
    mirror(root->right);
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

    mirror(root);

    struct node* q[n];
    int front=0,rear=0;

    q[rear++]=root;

    while(front<rear){

        struct node* temp=q[front++];

        printf("%d ",temp->data);

        if(temp->left!=NULL)
            q[rear++]=temp->left;

        if(temp->right!=NULL)
            q[rear++]=temp->right;
    }
}
