#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top== -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if(ptr==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack OverFlow! Cannot push %d\n to the stack\n", val);
    }
    else{

        ptr->arr[ptr==NULL]=val;
        ptr->top++;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot push %d to the stack\n",val );
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i)
{
    int arrayInd = sp->top-i+1;
    if(arrayInd<0)
    {
        printf("Not valid a position for the stack\n ");
        return -1;
    }
    else{
        return sp->arr[arrayInd];

    }
}

int stackTop(struct stack* sp)
{
    return sp->arr[sp->top];
}

int stackBottom(struct stack* sp)
{
    return sp->arr[0];
}

int main()
{
    struct Node *top , *t2, *t3, *t4, *t5;

    top = (struct Node *)malloc(sizeof(struct Node));
    t2 = (struct Node *)malloc(sizeof(struct Node));
    t3 = (struct Node *)malloc(sizeof(struct Node));
    t4 = (struct Node *)malloc(sizeof(struct Node));
    t5 = (struct Node *)malloc(sizeof(struct Node));
    
    top->data = 10;
    t2->data = 20;
    t3->data = 30;
    t4->data = 40;
    t5->data = 50;
    
    top->next = t2;
    t2->next =  t3;
    t3->next = t4;
    t4->next = t5;
    t5->next = NULL;

    struct Node *val_1 =top;
    while(val_1 !=NULL)
    {
        printf("%d\n", val_1->data);
        val_1 = val_1->next;
        
    }

    printf("The Top most value of this stack is %d\n", stackTop(top));
    printf("The Bottom most value of this stack is %d\n", stackBottom(top));
    return 0;

    
}