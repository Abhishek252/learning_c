#include<stdio.h>
int main()
{
    int age[5]  = {20, 30, 40, 50};
    int *p ;
    p= &age;
    printf("%d\n", &age[20]);
    p++;
    return 0;
}