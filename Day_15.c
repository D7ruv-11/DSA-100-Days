/*
day 15 - matrix diagonal sum

Problem: Calculate the sum of the primary diagonal of a matrix.

Input:
- First line: m n (rows and columns)
- Next m lines: n integers

Output:
- Print sum of primary diagonal elements
*/
#include <stdio.h>

void main() {

    int m,n;
    scanf("%d %d",&m,&n);

    int a[m][n];

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);


    int sum=0;

    for(int i=0;i<m && i<n;i++)
        sum+=a[i][i];

    printf("%d",sum);
}
