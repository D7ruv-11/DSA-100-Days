/*
problem: write a recursive function fib(n) to compute the n-th fibonacci number
where fib(0) = 0 and fib(1) = 1

input:
single integer n

output:
print the n-th fibonacci number

example:
input:
6

output:
8

explanation:
sequence: 0, 1, 1, 2, 3, 5, 8 at positions 0, 1, 2, 3, 4, 5, 6
*/

#include <stdio.h>

int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}

void main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
}
