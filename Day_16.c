/*
day 16 - frequency counter in array

Problem: Count frequency of each element in an array.

Input:
- First line: n (number of elements)
- Next line: n integers

Output:
- Print element and its frequency
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    int visited[n];
    for(int i=0;i<n;i++)
        visited[i]=0;


    for(int i=0;i<n;i++){

        if(visited[i]==1)
            continue;

        int count=1;

        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                visited[j]=1;
            }
        }

        printf("%d occurs %d times\n",a[i],count);
    }
}
