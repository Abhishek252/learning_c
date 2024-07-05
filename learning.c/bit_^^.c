#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d", &a,&b);
    printf("%d\n", a^b);
    return 0;
}