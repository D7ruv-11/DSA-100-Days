/*
day 50 - check palindrome string

Problem: Check if a string is palindrome.

Input:
- String

Output:
- Print "Palindrome" or "Not Palindrome"
*/
#include <stdio.h>

void main() {

    char str[100];

    scanf("%s",str);


    int len=0;

    while(str[len]!='\0')
        len++;


    int i=0,j=len-1,flag=1;

    while(i<j){

        if(str[i]!=str[j]){
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
