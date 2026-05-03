/*
day 46 - count even and odd numbers

Problem: Count number of even and odd elements in an array.

Input:
- n
- array elements

Output:
- Print even count and odd count
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);


    int even=0,odd=0;

    for(int i=0;i<n;i++){

        if(a[i]%2==0)
            even++;
        else
            odd++;
    }


    printf("Even = %d\n",even);
    printf("Odd = %d",odd);
}
