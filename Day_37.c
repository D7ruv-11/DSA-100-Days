/*
day 37 - double ended queue (deque)

Problem: Implement deque (double ended queue).

Input:
- Number of elements
- Elements

Output:
- Print deque
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int dq[n];

    int front=0,rear=-1;


    for(int i=0;i<n;i++){

        int x;
        scanf("%d",&x);

        rear++;
        dq[rear]=x;
    }


    for(int i=front;i<=rear;i++)

        printf("%d ",dq[i]);
}
