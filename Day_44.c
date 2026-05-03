/*
day 44 - reverse an array

Problem: Reverse the elements of an array.

Input:
- n
- array elements

Output:
- Print reversed array
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    int i=0,j=n-1;

    while(i<j){

        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;

        i++;
        j--;
    }


    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
