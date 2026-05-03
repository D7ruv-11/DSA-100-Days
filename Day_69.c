/*
day 69 - hash table using chaining

Problem: Implement hash table using chaining.

Input:
- n elements

Output:
- Print hash table
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct node{
    int data;
    struct node* next;
};

void main() {

    int n;
    scanf("%d",&n);

    struct node* table[SIZE];

    for(int i=0;i<SIZE;i++)
        table[i]=NULL;


    for(int i=0;i<n;i++){

        int key;
        scanf("%d",&key);

        int index=key%SIZE;

        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=key;
        newnode->next=table[index];
        table[index]=newnode;
    }


    for(int i=0;i<SIZE;i++){

        printf("%d: ",i);

        struct node* temp=table[i];

        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }

        printf("\n");
    }
}
