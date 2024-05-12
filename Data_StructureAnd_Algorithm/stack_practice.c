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
    return 0;
}
int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow!");
    }
    else{
        ptr->arr[ptr->top]= val;
        ptr->top++;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr)){
        printf("Stack Underflow! ");
        return -1;
    }
    else{

        int val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main()
{
    struct stack *sp = (struct stack*)malloc(sizeof (struct stack));
    sp->size = 10;
    sp-> top= -1;
    sp->arr= (int*)malloc(sp->size* sizeof(int));

    printf("Stack is created succssfully.\n");

    printf("Befre pushing, isFull: %d\n", isFull(sp));
    printf("Before pushing  ,isEmpty:%d\n ", isEmpty(sp));

    push(sp, 1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,5);
    push(sp,6);
    push(sp,7);
    push(sp,8);
    push(sp,9);
    push(sp,10);

    printf("After pushing, Full :%d\n", isFull(sp));
    printf("After pushing, Empty: %d\n", isEmpty(sp));

    printf("popped from the stack %d\n", pop(sp));
    printf("Popped from the stack %d\n", pop(sp));
    printf("Popped from the stack %d\n", pop(sp));
    printf("Popped from the stack %d\n", pop(sp));
    printf("Popped from the stack %d\n", pop(sp));
    printf("Popped from the stack %d\n", pop(sp));
    
    return 0;
}
