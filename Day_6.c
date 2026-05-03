/*
Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

Input:
- First line: integer n
- Second line: n space-separated integers (sorted array)

Output:
- Print unique elements only, space-separated

Example:
Input:
6
1 1 2 2 3 3

Output:
1 2 3

Explanation: Keep first occurrence of each element: 1, 2, 3
*/
#include <stdio.h>
void main() {
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    
    int arr2[n],count=0;
    
    for (int i=0;i<n;i++) {
        if (arr[i] != arr[i+1]) {
            arr2[count] = arr[i];
            count++;
        }
    }
    for (int i=0;i<count;i++) {
        printf("%d\t",arr2[i]);
    }
}
