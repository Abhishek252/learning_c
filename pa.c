#include<stdio.h>
#include<conio.h>
int main()
{
    int numbers = 50;
    int *p;
    p = &numbers;
    printf(" Address of p variables is %u \n", p);
    printf("p variable is %u\n", *p);
    getch();

}