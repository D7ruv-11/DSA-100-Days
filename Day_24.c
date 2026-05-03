/*
day 24 - delete first occurrence of a key

Problem: Delete first occurrence of a key in a linked list.

Input:
- Elements of linked list
- Key to delete

Output:
- Print updated list
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


    struct node *curr=head,*prev=NULL;

    while(curr!=NULL){

        if(curr->data==key){

            if(prev==NULL)
                head=curr->link;
            else
                prev->link=curr->link;

            break;
        }

        prev=curr;
        curr=curr->link;
    }


    temp=head;

    while(temp!=NULL){

        printf("%d ",temp->data);

        temp=temp->link;
    }
}
