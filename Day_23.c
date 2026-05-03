/*
day 23 - merge two sorted linked lists

Problem: Merge two sorted linked lists into one sorted list.

Input:
- Elements of both linked lists

Output:
- Print merged list
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void main() {

    int n1,n2;
    scanf("%d",&n1);

    struct node *h1=NULL,*t1,*newnode;

    for(int i=0;i<n1;i++){

        newnode=(struct node*)malloc(sizeof(struct node));

        scanf("%d",&newnode->data);
        newnode->link=NULL;

        if(h1==NULL){
            h1=newnode;
            t1=newnode;
        }
        else{
            t1->link=newnode;
            t1=newnode;
        }
    }


    scanf("%d",&n2);

    struct node *h2=NULL,*t2;

    for(int i=0;i<n2;i++){

        newnode=(struct node*)malloc(sizeof(struct node));

        scanf("%d",&newnode->data);
        newnode->link=NULL;

        if(h2==NULL){
            h2=newnode;
            t2=newnode;
        }
        else{
            t2->link=newnode;
            t2=newnode;
        }
    }


    struct node *p1=h1,*p2=h2;

    while(p1!=NULL && p2!=NULL){

        if(p1->data < p2->data){
            printf("%d ",p1->data);
            p1=p1->link;
        }
        else{
            printf("%d ",p2->data);
            p2=p2->link;
        }
    }

    while(p1!=NULL){
        printf("%d ",p1->data);
        p1=p1->link;
    }

    while(p2!=NULL){
        printf("%d ",p2->data);
        p2=p2->link;
    }
}
