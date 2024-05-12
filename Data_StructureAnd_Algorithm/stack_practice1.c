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

int isFull(struct  stack *ptr)
{
      if(ptr->top == ptr->size -1)
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
        printf("stack overflow!");

    }
    else{
        ptr->arr[ptr->top]=val;
        ptr->top++;

    }
}
char pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack underflow!");
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
    struct stack *sp = (struct stack *) malloc (sizeof (struct stack));
    printf("Enter a  stack size:\n");
    scanf("%d", sp->size);
    printf("Enter a  stack top:\n");
    scanf("%d", sp->top);
    sp->arr = (int *)malloc(sp->size* sizeof(int));

    printf("Stack is created successfully:\n");

    printf("Before pushing, Full : %d\n", isFull(sp));
    printf("Before pushing, Empty : %d\n ",isEmpty(sp));
     
    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);
    push(sp, 6);
    push(sp, 7);
    push(sp, 8);
    push(sp, 9);
    push(sp, 10);

    printf("After pushing, Full: %d\n", isFull(sp));
    printf("After pushing , Empty: %d\n", isEmpty(sp));

    printf("After popped %d from the stack\n");
    printf("After popped %d from the stack\n");
    printf("After popped %d from the stack\n");
    
    return 0;
}
