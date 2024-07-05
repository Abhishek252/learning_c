#include<stdio.h>
int main()
{
    char a[20];
    int i;
    gets(a);
    i =0;
    while(a[i]!='\0')
    i++;
    printf("string length = %d", i);
    return 0;
}