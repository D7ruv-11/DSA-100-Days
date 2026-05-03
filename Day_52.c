/*
day 52 - fibonacci using recursion

Problem: Print nth Fibonacci number using recursion.

Input:
- n

Output:
- Print nth Fibonacci number
*/
#include <stdio.h>

int fib(int n){

    if(n==0)
        return 0;
    if(n==1)
        return 1;

    return fib(n-1) + fib(n-2);
}

void main() {

    int n;
    scanf("%d",&n);


    int result = fib(n);


    printf("%d",result);
}
