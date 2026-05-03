/*
day 48 - string length without strlen

Problem: Find the length of a string without using strlen function.

Input:
- String

Output:
- Print length of string
*/
#include <stdio.h>

void main() {

    char str[100];

    scanf("%s",str);


    int len=0;

    while(str[len]!='\0')
        len++;


    printf("%d",len);
}
