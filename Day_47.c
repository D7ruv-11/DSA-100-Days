/*
day 47 - check palindrome array

Problem: Check if an array is palindrome.

Input:
- n
- array elements

Output:
- Print "Palindrome" or "Not Palindrome"
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    int i=0,j=n-1,flag=1;

    while(i<j){

        if(a[i]!=a[j]){
            flag=0;
            break;
        }

        i++;
        j--;
    }


    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
