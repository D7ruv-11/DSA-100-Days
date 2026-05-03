/*
day 45 - sum of array elements

Problem: Find the sum of all elements in an array.

Input:
- n
- array elements

Output:
- Print sum
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    int sum=0;

    for(int i=0;i<n;i++)
        sum+=a[i];


    printf("%d",sum);
}
