/*
day 39 - binary search

Problem: Perform binary search on a sorted array.

Input:
- n
- sorted array
- key

Output:
- Print index if found else -1
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int key;
    scanf("%d",&key);


    int low=0,high=n-1,mid,found=-1;

    while(low<=high){

        mid=(low+high)/2;

        if(a[mid]==key){
            found=mid;
            break;
        }
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    printf("%d",found);
}
