/*
day 14 - check identity matrix

Problem: Check whether a given square matrix is an identity matrix.
All diagonal elements are 1, others are 0.

Input:
- First line: n (size of square matrix)
- Next n lines: n integers each

Output:
- Print "Identity Matrix" or "Not an Identity Matrix"
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);


    int flag=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && a[i][j]!=1)
                flag=0;
            if(i!=j && a[i][j]!=0)
                flag=0;
        }
    }

    if(flag)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");
}
