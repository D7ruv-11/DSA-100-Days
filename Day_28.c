/*
day 28 - circular linked list creation and traversal

Problem: Create a circular linked list and traverse it.

Input:
- Elements to insert

Output:
- Print elements
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

    struct node *head=NULL,*temp,*newnode;

    for(int i=0;i<n;i++){

        newnode=(struct node*)malloc(sizeof(struct node));

        scanf("%d",&newnode->data);

        newnode->link=NULL;

        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->link=newnode;
            temp=newnode;
        }
    }


    temp->link=head;


    temp=head;

    do{

        printf("%d ",temp->data);

        temp=temp->link;

    }while(temp!=head);
}
