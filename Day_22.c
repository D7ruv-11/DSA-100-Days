/*
day 22 - count number of nodes in singly linked list

Problem: Count number of nodes in a singly linked list.

Input:
- Elements of the linked list

Output:
- Print number of nodes
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


    int count=0;

    temp=head;

    while(temp!=NULL){

        count++;

        temp=temp->link;
    }

    printf("%d",count);
}
