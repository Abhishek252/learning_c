#include<stdio.h>

union var
{
    int a,b;

};

int main()
{
    union var v;
    v.a = 10;
    v.b = 20;
    printf("%d\n", v.a);
    printf("%d\n", v.b);
    return 0;

}

