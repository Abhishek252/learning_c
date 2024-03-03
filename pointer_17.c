#include<stdio.h>
#include<conio.h>
int main()
{
    int age= 56;
    int *ptr= &age;
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    return 0;
}
