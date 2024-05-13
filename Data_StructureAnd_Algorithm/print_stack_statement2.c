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
    if(ptr->top == 10)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if(ptr->top== ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push (struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("stack overflow!cannot push %d to the stack\n", val);

    }
    else{

        ptr->arr[ptr->top] = val;
        ptr->top++;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack underflow! cannot pop fram the stack");
        return -1;
    }
    else{

        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *sp = (struct stack*) malloc(sizeof (struct stack));
    sp->size = 10;
    sp->top = 10 ;
    sp->arr = (int *)malloc(sp->size * (sizeof(int)));

    printf("stack created successflly:");

    printf("Before pushing , Full: %d\n", isFull(sp));
    printf("Before pushing , Empty, %d\n", isEmpty(sp));

    push(sp, 2);
    push(sp, 4);
    push(sp, 5);
    push(sp, 65);
    push(sp, 64);
    push(sp, 63);
    push(sp, 62);
    push(sp, 61);
    push(sp, 66);
    push(sp, 67);
    push(sp, 69);


    printf("After pushing, Full :%d\n", isFull(sp));
    printf("After pushing, Empty: %d\n", isEmpty(sp));

    printf("popped fram the stack %d\n", pop(sp));
    printf("popped fram the stack %d\n", pop(sp));
    printf("popped fram the stack %d\n", pop(sp));
    printf("popped fram the stack %d\n", pop(sp));
    printf("popped fram the stack %d\n", pop(sp));
    printf("popped fram the stack %d\n", pop(sp));
    printf("popped fram the stack %d\n", pop(sp));
    printf("popped fram the stack %d\n", pop(sp));
    printf("popped fram the stack %d\n", pop(sp));
    printf("popped fram the stack %d\n", pop(sp));    



    return 0;
    


}
