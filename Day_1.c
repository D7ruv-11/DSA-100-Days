/*Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right*/

#include <stdio.h>
void main() {
    int size;
    scanf("%d",&size);
    
    int arr[size+1];
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    
    int element,position;
    scanf("%d",&position);
    scanf("%d",&element);
    
    for (int i=size+1;i>=position;i--) {  
        
        arr[i] = arr[i-1];           
    }
    arr[position] = element;
    
    for (int i=0;i<=size;i++) {
        printf("%d\t",arr[i]);
      
    }
}
