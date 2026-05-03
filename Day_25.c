/*
day 25 - count occurrences of an element in linked list

Problem: Count occurrences of a given element.

Input:
- Elements of linked list
- Element to count

Output:
- Print count
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


    int key;
    scanf("%d",&key);


    int count=0;

    temp=head;

    while(temp!=NULL){

        if(temp->data==key)
            count++;

        temp=temp->link;
    }

    printf("%d",count);
}
