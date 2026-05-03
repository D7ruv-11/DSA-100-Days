/*
day 40 - selection sort

Problem: Sort an array using selection sort.

Input:
- n
- array elements

Output:
- Print sorted array
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    for(int i=0;i<n-1;i++){

        int min=i;

        for(int j=i+1;j<n;j++){
            if(a[j]<a[min])
                min=j;
        }

        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }


    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
