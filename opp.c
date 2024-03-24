#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 5;
    int *p ;
    p = &a;

    printf("%d\n", *p);
    printf("%d", p);
    p++;
    return 0;
}
