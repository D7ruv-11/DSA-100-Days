/*
day 36 - circular queue using array

Problem: Implement circular queue using array.

Input:
- Number of elements
- Elements

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

        rear=(rear+1)%n;

        q[rear]=x;
    }


    int i=front;

    while(1){

        printf("%d ",q[i]);

        if(i==rear)
            break;

        i=(i+1)%n;
    }
}
