/*
day 51 - factorial using recursion

Problem: Find factorial of a number using recursion.

Input:
- n

Output:
- Print factorial of n
*/
#include <stdio.h>

int fact(int n){

    if(n==0 || n==1)
        return 1;

    return n * fact(n-1);
}

void main() {

    int n;
    scanf("%d",&n);


    int result = fact(n);


    printf("%d",result);
}
