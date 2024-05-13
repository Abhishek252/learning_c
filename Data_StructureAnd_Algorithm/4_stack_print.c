#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;

};

int isEmpty(struct stack * ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
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
        printf("stack overflow! Cannot push %d to the stack ", val);

    }
    else{

        ptr->arr[ptr->top]=val;
        ptr->top--;

    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack underflow! Cannot popfrom the stack\n");
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
    struct stack *s = (struct stack*) malloc(sizeof(struct stack));

    printf("Enter stack size\n");
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (int *)malloc (s->size * sizeof(int));

    printf("Stack has been created successfully.");

    printf("Before pushing, Full %d\n", isFull(s));
    printf("Before pushing, Empty %d\n", isEmpty(s));


    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    

    printf("After pushing, Full:%d\n", isFull(s));
    printf("After pushing, Empty:%d\n", isEmpty(s));

    printf("popped from the stack %d\n", pop(s));
    printf("popped from the stack %d\n", pop(s));
    printf("popped from the stack %d\n", pop(s));
    printf("popped from the stack %d\n", pop(s));
    printf("popped from the stack %d\n", pop(s));

    return 0;    

}