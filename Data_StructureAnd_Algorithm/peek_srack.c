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

void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("stack overflow !cannot push %d to the stack\n", val);
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
        printf("stack underflow! cannot pop fram the stack\n");
        return 1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i)
{
    int arrayInd = sp->top-i+1;
    
        if(arrayInd< 0)
        {
            printf("Not a valid position for the stack\n");
            return 1;
        }
        else{

            return sp->arr[arrayInd];
        }
    
}

int main()
{
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 15;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size *sizeof(int));

    printf("stack has been created successfully.\n");
   
   printf("Before pushing , Full: %d\n", isFull(sp));
   printf("Before pushing, Empty: %d\n", isFull(sp));

   push(sp,1);
   push(sp,11);
   push(sp, 21);
   push(sp,34);
   push(sp,15);
   push(sp,16);
   push(sp,17);
   push(sp,18);
   push(sp,19);
   push(sp,20);
   push(sp,22);
   push(sp,23);
   push(sp,41);
   push(sp,13);
   push(sp,12);

   for(int j = 1; j <= sp->top + 1; j++ )
   {
    printf("the value of position %d is %d\n", j, peek(sp, j));
   }
   return 0;

}