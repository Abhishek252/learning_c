#include<stdio.h>
int main()
{
    int a = 10;
    int *p, **q,***r;

    p= &a;
    q=&p;
    r=&q;
    printf("%d %d %d\n", *p,**q,***r);
    printf("%d %d %d\n", p,q,r);
    printf("%u %u %u\n", *p,**q,***r);

    printf("%u %u %u\n", p,q,r);

    printf("sum is %d\n ", *p+**q+***r);

    printf("%d\n", a);
    return 0; 
}