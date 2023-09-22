#include<stdio.h>
#include<stdlib.h>

int sum(int a,int b)
{
    return a+b;
}
void geetHelloAndExecute(int(*fptr)(int,int)){
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n",fptr(5,7));

}
void greetGmAndExecute(int(*fptr)(int,int)){
    ptintf("Good Morning user\n");
    printf("The sum of 5 and 7 is %d\n",fptr(5,7));

}
int main()
{
    int (*ptr)(int,int);
    ptr = sum;
    greetHelloAndExecute(ptr);
    'return0';
}

