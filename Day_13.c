/*
day 13 - boundary-to-center matrix walk

Problem: Given a rectangular matrix of integers, starting from the outer boundary, 
traverse the matrix clockwise layer by layer until all elements are visited.

Input:
- First line: two integers r and c (rows and columns)
- Next r lines: c integers each representing the matrix

Output:
- Print all elements in the traversal order
*/
#include <stdio.h>

void main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int top=0,bottom=r-1,left=0,right=c-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++)
            printf("%d ",a[top][i]);
        top++;
        for(int i=top;i<=bottom;i++)
            printf("%d ",a[i][right]);
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--)
                printf("%d ",a[bottom][i]);
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--)
                printf("%d ",a[i][left]);
            left++;
        }
    }
}
