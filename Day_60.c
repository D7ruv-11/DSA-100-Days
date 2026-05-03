/*
day 60 - validate min heap

Problem: Check if given array represents a valid min heap.

Input:
- n
- array elements

Output:
- Print "Valid Min Heap" or "Not a Min Heap"
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    int flag=1;

    for(int i=0;i<=n/2-1;i++){

        int l=2*i+1;
        int r=2*i+2;

        if(l<n && a[i]>a[l]){
            flag=0;
            break;
        }

        if(r<n && a[i]>a[r]){
            flag=0;
            break;
        }
    }


    if(flag)
        printf("Valid Min Heap");
    else
        printf("Not a Min Heap");
}
