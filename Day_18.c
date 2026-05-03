/*
day 18 - rotate array by k positions

Problem: Rotate an array by k positions to the right.

Input:
- First line: n k
- Next line: n integers

Output:
- Print array after rotation
*/
#include <stdio.h>

void main() {

    int n,k;
    scanf("%d %d",&n,&k);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    k = k % n;

    for(int i=n-k;i<n;i++)
        printf("%d ",a[i]);

    for(int i=0;i<n-k;i++)
        printf("%d ",a[i]);
}
