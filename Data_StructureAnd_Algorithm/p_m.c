#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr ->top == -1)
    {
        return 1;
    }
    else{
          
          return 0;
    }

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

void push(struct stack *ptr, char val)
{

   if (isFull(ptr))
    {
       printf("stack overflow! cannot push %d to the stack\n", val);

    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;

    }
}

char pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack underfloe! cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;

    }
}

char stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}
int match(char a, char b)
{
    if(a == '{' && b == '}')
    {
        return 1;
    }
    if(a == '(' && b == ')')
   {
    return 1;
   }
   if(a=='[' && b == ']')
   {
    return 1;
   }

   return 0;
    
}

int parenthesisMatching(char *arr1)
{
    struct stack* sp;
    sp->size = 50;
    sp->top -1;  
   sp->arr = (char*)mallock(sp->size * sizeof(char));
   char popped_ch;

   for(int i=0; arr1[i]!='\0'; i++)
   {
    if(arr1[i]=='('||arr1[i] == '{' ||arr1[1] == '[')
    {
        push(sp, arr[i]);

    }else if(arr1[i]==')' || arr1[i]=='{'|| arr1[i] == '[')
       {

          if(isEmpty(sp))
          {
            return 0;
          }
         popped_ch = pop(sp);

         if(!match(popped_ch, arr1[i]))
         return 0;
       }
   }

   if(isEmpyt(sp))
   {
    return 1;
   }
   else 
   {
    return 0;
   }
    
}

int main()
{
    char *arr1 = "[4-6]((8){(9-8)})";
    if(parenthesisMatching(arr1))
    {

        printf("this is matching\n");
    }
    else
    {
        printf("this is not matching\n");

    }

    return 0;
}

