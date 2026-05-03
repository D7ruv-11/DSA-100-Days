/*
day 17 - find maximum and minimum element

Problem: Find the maximum and minimum elements in an array.

Input:
- First line: n (number of elements)
- Next line: n integers

Output:
- Print maximum and minimum element
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    int max=a[0];
    int min=a[0];

    for(int i=1;i<n;i++){

        if(a[i]>max)
            max=a[i];

        if(a[i]<min)
            min=a[i];
    }

    printf("Max = %d\n",max);
    printf("Min = %d",min);
}
