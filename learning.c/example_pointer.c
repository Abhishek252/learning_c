#include<stdio.h>
int main()
{
    int x=5, *p;
    p= &x;
    printf("%d", ++*p);
    return 0;

}