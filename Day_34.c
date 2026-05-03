/*
day 34 - evaluate postfix expression

Problem: Evaluate postfix expression.

Input:
- Postfix expression

Output:
- Print result
*/
#include <stdio.h>
#include <ctype.h>

void main() {

    char postfix[100];

    int stack[100];
    int top=-1;

    scanf("%s",postfix);


    for(int i=0;postfix[i]!='\0';i++){

        char c=postfix[i];

        if(isdigit(c)){
            stack[++top]=c-'0';
        }

        else{

            int b=stack[top--];
            int a=stack[top--];

            if(c=='+')
                stack[++top]=a+b;

            else if(c=='-')
                stack[++top]=a-b;

            else if(c=='*')
                stack[++top]=a*b;

            else if(c=='/')
                stack[++top]=a/b;
        }
    }


    printf("%d",stack[top]);
}
