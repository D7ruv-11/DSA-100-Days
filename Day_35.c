/*
day 35 - queue using array

Problem: Implement queue using array.

Input:
- Number of elements
- Elements to insert

Output:
- Print queue
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int q[n];

    int front=0,rear=-1;


    for(int i=0;i<n;i++){

        int x;
        scanf("%d",&x);

        rear++;
        q[rear]=x;
    }


    for(int i=front;i<=rear;i++)

        printf("%d ",q[i]);
}
