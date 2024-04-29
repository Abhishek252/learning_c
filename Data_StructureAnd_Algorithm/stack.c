#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;

};

int isEmpty(struct stack*ptr)
{
    if(ptr-> top == -1)
    {
        return 1;
    }
    else{

        return 0;
    }

}

int isFull(struct stack *ptr)

{
    if(ptr->top == ptr->size -1)
    {
        return 1;
    }else{

        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("stack overfloe", val);

    }else{

        ptr->top++;
        ptr->arr[ptr->top] = val;

    }

}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack underflow");
        return -1;

    }else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main()
{
    struct stack *sp =(struct stack *) malloc (sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp-> arr = (int *) malloc(sp->size * sizeof(int));
    
    printf("stack has been created a successfully");
   

    printf("before pushing ,full is %d\n", isFull(sp));
    printf("before pushing , full is %d\n", isEmpty(sp));
    
    push(sp, 10);
    push(sp, 3);
    push(sp, 12);
    push(sp, 14);
    push(sp, 19);
    push(sp, 20);
    push(sp, 34);
    push(sp, 76);
    push(sp, 99);
    push(sp, 23);

    printf("after pushing , full is %d\n", isFull(sp));
    printf("after pushing , full is %d\n", isEmpty(sp));

    printf("popped %d form the stack\n ",pop(sp) );
    printf("popped %d form the stack\n", pop(sp));
    printf("pppped %d form the stack \n", pop(sp));
    return 0;


}

