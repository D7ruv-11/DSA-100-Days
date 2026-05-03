/*
day 56 - check symmetric binary tree

Problem: Check if a binary tree is symmetric.

Input:
- Number of nodes
- Level order input (-1 for NULL)

Output:
- Print "Symmetric" or "Not Symmetric"
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

int check(struct node* a, struct node* b){

    if(a==NULL && b==NULL)
        return 1;

    if(a==NULL || b==NULL)
        return 0;

    if(a->data!=b->data)
        return 0;

    return check(a->left,b->right) && check(a->right,b->left);
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

    if(check(root,root))
        printf("Symmetric");
    else
        printf("Not Symmetric");
}
