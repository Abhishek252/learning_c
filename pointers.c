#include<stdio.h>
#include<conio.h>
int main()
{
    int var = 45;
    int *P;
    P = &var;
    P++;
    printf("the var is %d\n", &var);
    printf("\n the var is %d", P);
    return  0;
}