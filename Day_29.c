/*
day 29 - rotate linked list right by k places

Problem: Rotate linked list right by k places.

Input:
- Elements of linked list
- k

Output:
- Print rotated list
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


    int k;
    scanf("%d",&k);

    k = k % n;

    for(int i=0;i<n-k;i++){

        temp=head;

        while(temp->link!=NULL)
            temp=temp->link;

        temp->link=head;

        head=head->link;

        temp->link->link=NULL;
    }


    temp=head;

    while(temp!=NULL){

        printf("%d ",temp->data);

        temp=temp->link;
    }
}
