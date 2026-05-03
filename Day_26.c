/*
day 26 - doubly linked list insertion and traversal

Problem: Insert nodes into a doubly linked list and traverse.

Input:
- Elements to insert

Output:
- Print elements in order
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

void main() {

    int n;
    scanf("%d",&n);

    struct node *head=NULL,*temp,*newnode;

    for(int i=0;i<n;i++){

        newnode=(struct node*)malloc(sizeof(struct node));

        scanf("%d",&newnode->data);

        newnode->prev=NULL;
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }


    temp=head;

    while(temp!=NULL){

        printf("%d ",temp->data);

        temp=temp->next;
    }
}
