#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
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

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else{

        return 0;
    }
    
}
void push(struct stack *ptr,char val)
{
    if(isFull(ptr))
    {
        printf("Stack Overfull! Cannot push %d to the stack\n");
    }
    else{
        ptr->arr[ptr->top] =val;
        ptr->top++;
    }
}

char pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{

        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthesesMatch(char *exp)
{
    struct stack *sp;
    sp->size = 80;
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size * sizeof(char));
    for(int i=0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(')
        {
            push(sp,'(');

        }
        else if(exp[i]==')')
        {
            if(isFull(sp))
            {
                return 0;
            }
            pop(sp);
        }

    }

    if(isFull(sp))
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char *exp = "[6-8](8-9)(67-9))";
    if(parenthesesMatch(exp))
    {
       printf("the parentheses are matching\n");
    }

    else{

        printf("The parentheses are not matching\n");
    }
    return 0;
}