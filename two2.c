#include<stdio.h>
int main()
{
    char *p[10];
    printf("Enter your number\n");
    fgets(*p,10,stdin);
    printf("%s",*p);
    return 0;
}

