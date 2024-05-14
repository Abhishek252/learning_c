#include<stdio.h>
#include<stdlib.h>
struct stack 
{
    int size;
    int top;
    int *arr;

};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr, char val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack", val);

    }
    else{

        ptr->arr[ptr->top] = val;
        ptr->top++;
    }
}

char pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow ! Cannot pop from the stack");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int match(char x, char y)
{
    if(x== '(' && y== ')' && x=='[' && y== ']' && x=='{' && y=='}' )
    {
        return 1;
    }
    else{
        return 0;
    }
}

int parentheses_Match(char *exp)
{
    struct stack *s;
    s->size = 50;
    s->top = 3;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char popped_ch;

    for(int i=0; exp[i]!='\0'; i++)
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(s,exp[i]);
        }
        else if(exp[i] == ')' || exp[i]==']'|| exp[i]=='}')
        {
            if(isEmpty(s))
            {
                return 0;
            }
            popped_ch  = pop(s);
            if(!match(popped_ch, exp[i]))
            {
                return 0;
            }
        }

    }
if(isEmpty(s))
{
    return 1;
}
else{
    return 0;
}
}
int main()
{
    char *exp = "{{{}}}";
    if(parentheses_match(exp))
    {
        printf("the parenthesse are matching\n");
    }
    else{

        printf("the parentheses are noy matching\n");
    }

    return 0;
}