/*
day 38 - priority queue using array

Problem: Implement priority queue using array.

Input:
- Number of elements
- Elements

Output:
- Print elements in priority order
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j] < a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }


    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
