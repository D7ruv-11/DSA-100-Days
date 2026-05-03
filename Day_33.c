/*
day 33 - infix to postfix conversion

Problem: Convert infix expression to postfix.

Input:
- Expression

Output:
- Print postfix expression
*/
#include <stdio.h>
#include <ctype.h>

void main() {

    char infix[100];
    char stack[100];
    char postfix[100];

    int top=-1,k=0;

    scanf("%s",infix);


    for(int i=0;infix[i]!='\0';i++){

        char c=infix[i];

        if(isalnum(c)){
            postfix[k++]=c;
        }

        else if(c=='('){
            stack[++top]=c;
        }

        else if(c==')'){

            while(top!=-1 && stack[top]!='(')
                postfix[k++]=stack[top--];

            top--;
        }

        else{

            while(top!=-1 && stack[top]!='('){
                postfix[k++]=stack[top--];
            }

            stack[++top]=c;
        }
    }


    while(top!=-1)
        postfix[k++]=stack[top--];

    postfix[k]='\0';


    printf("%s",postfix);
}
