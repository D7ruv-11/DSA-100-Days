/*
day 30 - polynomial using linked list

Problem: Represent polynomial using linked list.

Input:
- Coefficients and powers

Output:
- Print polynomial
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int coeff;
    int power;
    struct node *link;
};

void main() {

    int n;
    scanf("%d",&n);

    struct node *head=NULL,*temp,*newnode;

    for(int i=0;i<n;i++){

        newnode=(struct node*)malloc(sizeof(struct node));

        scanf("%d %d",&newnode->coeff,&newnode->power);

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

        printf("%dx^%d",temp->coeff,temp->power);

        if(temp->link!=NULL)
            printf(" + ");

        temp=temp->link;
    }
}
