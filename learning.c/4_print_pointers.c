#include<stdio.h>
int main()
{
    char a = 'A';
    char *ptr= &a;
    printf("%d\n", a);
    printf("%c\n", a);

    printf("%c", *ptr);

    
    return 0;
}