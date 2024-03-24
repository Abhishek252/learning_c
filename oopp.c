#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 5;
    int *p;
    p = &a;
    printf("%d\n", *p);
    p++;
    
    return 0;
}