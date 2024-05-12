#include<stdio.h>
#include<stdlib.h>
struct stack 
{
    int size ;
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
    if(ptr->top == ptr->size==-1)
    {
        return 1;
    }
    else{

        return 0;
    }
}

int main()
{
    struct stack *sp;
    sp->size= 60;
    sp->top-1;
    sp->arr = (int*)malloc(sp->size * sizeof(int));
    sp->arr[0] = 20;
    sp->arr[1] = 30;
    sp->top++;

    if(isEmpty(sp))
    {
        printf("the stack is empty\n");
    }
    else{
        printf("the stack is not empty\n");
    }
    return 0;

}