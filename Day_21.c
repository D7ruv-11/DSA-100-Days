/*
day 21 - create and traverse singly linked list

Problem: Create a singly linked list and traverse it.

Input:
- Elements of the linked list

Output:
- Print elements in order
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

        newnode = (struct node*)malloc(sizeof(struct node));

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


    temp=head;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
