#include<stdio.h>
int main()
{
    int num = 10;
    int *p ;
    p= &num;
    printf("%d\n",*p );
    return 0;
}