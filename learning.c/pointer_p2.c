#include<stdio.h>
int main()
{
    int a  = 5;
    int b= 5;
    int *p, *c;
    p= &a;
    c= &b;

    printf("%d %d\n", a,b);
    printf("sum of %d \n", *p +*c);
    
    return 0;

}