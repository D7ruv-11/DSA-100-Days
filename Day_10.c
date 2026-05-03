/*
Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards
*/ 

#include <stdio.h>
#include <string.h>
void main() {
    char arr[50];
    scanf("%s",arr);

    int len = strlen(arr);
    int temp = len-1,check=1;
    for (int i=0; i<len/2; i++) {
        if (arr[i] != arr[temp]) {
            check=0;
            break;
        }
        temp--;
    }
    if (check) {
        printf("palindrome");
    }
    else {
        printf("not palindrome");
    }
}
