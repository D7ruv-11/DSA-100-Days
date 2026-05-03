/*
day 32 - implement stack using linked list

Problem: Implement stack using linked list.

Input:
- Elements to push

Output:
- Print stack
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void main() {

    int n;
    scanf("%d",&n);

    struct node *top=NULL,*newnode,*temp;

    for(int i=0;i<n;i++){

        newnode=(struct node*)malloc(sizeof(struct node));

        scanf("%d",&newnode->data);

        newnode->link=top;

        top=newnode;
    }


    temp=top;

    while(temp!=NULL){

        printf("%d ",temp->data);

        temp=temp->link;
    }
}
