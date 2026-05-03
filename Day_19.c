/*
day 19 - pair sum closest to zero

Problem: Find a pair in the array whose sum is closest to zero.

Input:
- First line: n
- Next line: n integers

Output:
- Print the pair
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    int minsum = a[0] + a[1];
    int x=a[0],y=a[1];

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            int sum = a[i] + a[j];

            if(sum<0)
                sum = -sum;

            if(sum < minsum){

                minsum = sum;
                x = a[i];
                y = a[j];
            }
        }
    }

    printf("%d %d",x,y);
}
