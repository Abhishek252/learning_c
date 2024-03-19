#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b , *c = &a, *d = &b;

    printf("Enter two numbers to be summed");

    scanf("%d %d", &a ,&b);

    printf("The sum of two numbers %d\n ", *c + *d);

    printf("the defference of two variable %d\n", *c - *d);
    getch();
}    