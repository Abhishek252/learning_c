#include <stdio.h>
#include <stdbool.h>

#define Size 100
char stack[Size];
int top = -1;


void push(char val) {
    if (top >= Size - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = val;}


char pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}


bool isParentheses(char *s)
 {
    for (int i = 0; s[i]; i++) 
    {
        if (s[i] == '(') 
        {
            push(s[i]); } else if (s[i] == ')' && top != -1 && stack[top] == '(') 
            {
            pop();
        } 
        else if (s[i] == ')' && (top == -1 || stack[top] != '('))
         {
            return false;
        }
    }
    return top == -1;
}


int main() 
{
    char arr[] = "{[()]]]}";
    if (isParentheses(arr))
    {
        printf(" parentheses matching\n");
    } 
    else 
    {
        printf(" parentheses not matching.\n");}
    return 0;
}