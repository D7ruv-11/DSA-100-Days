/*
day 20 - count subarrays with sum zero

Problem: Count number of subarrays with sum zero.

Input:
- First line: n
- Next line: n integers

Output:
- Print count
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    int count=0;

    for(int i=0;i<n;i++){

        int sum=0;

        for(int j=i;j<n;j++){

            sum += a[j];

            if(sum==0)
                count++;
        }
    }

    printf("%d",count);
}
