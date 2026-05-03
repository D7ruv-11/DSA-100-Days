/*
day 70 - hash table using linear probing

Problem: Implement hash table using linear probing.

Input:
- n elements

Output:
- Print hash table
*/
#include <stdio.h>

#define SIZE 10

void main() {

    int table[SIZE];

    for(int i=0;i<SIZE;i++)
        table[i]=-1;


    int n;
    scanf("%d",&n);


    for(int i=0;i<n;i++){

        int key;
        scanf("%d",&key);

        int index=key%SIZE;

        while(table[index]!=-1)
            index=(index+1)%SIZE;

        table[index]=key;
    }


    for(int i=0;i<SIZE;i++)
        printf("%d ",table[i]);
}
