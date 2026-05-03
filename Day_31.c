/*
day 31 - implement stack using array

Problem: Implement stack using array with push/pop/peek.

Input:
- Number of elements
- Elements to push

Output:
- Print stack
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int stack[n];
    int top=-1;

    for(int i=0;i<n;i++){

        int x;
        scanf("%d",&x);

        top++;
        stack[top]=x;
    }


    for(int i=top;i>=0;i--)

        printf("%d ",stack[i]);
}
