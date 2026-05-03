/*
day 49 - reverse a string

Problem: Reverse a given string.

Input:
- String

Output:
- Print reversed string
*/
#include <stdio.h>

void main() {

    char str[100];

    scanf("%s",str);


    int len=0;

    while(str[len]!='\0')
        len++;


    int i=0,j=len-1;

    while(i<j){

        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;

        i++;
        j--;
    }


    printf("%s",str);
}
