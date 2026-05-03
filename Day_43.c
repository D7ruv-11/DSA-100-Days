/*
day 43 - linear search

Problem: Perform linear search on an array.

Input:
- n
- array elements
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


    int found=-1;

    for(int i=0;i<n;i++){

        if(a[i]==key){
            found=i;
            break;
        }
    }

    printf("%d",found);
}
