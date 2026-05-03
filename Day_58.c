/*
day 58 - build tree from inorder and preorder

Problem: Construct binary tree from inorder and preorder traversal.

Input:
- n
- preorder array
- inorder array

Output:
- Print level order of constructed tree
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

int preIndex=0;

struct node* create(int data){

    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

int search(int arr[],int start,int end,int value){

    for(int i=start;i<=end;i++){
        if(arr[i]==value)
            return i;
    }

    return -1;
}

struct node* build(int inorder[],int preorder[],int start,int end){

    if(start>end)
        return NULL;

    int curr=preorder[preIndex++];

    struct node* root=create(curr);

    if(start==end)
        return root;

    int pos=search(inorder,start,end,curr);

    root->left=build(inorder,preorder,start,pos-1);
    root->right=build(inorder,preorder,pos+1,end);

    return root;
}

void main() {

    int n;
    scanf("%d",&n);

    int preorder[n],inorder[n];

    for(int i=0;i<n;i++)
        scanf("%d",&preorder[i]);

    for(int i=0;i<n;i++)
        scanf("%d",&inorder[i]);


    struct node* root=build(inorder,preorder,0,n-1);


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
