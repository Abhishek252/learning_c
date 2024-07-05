#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i=0;
    printf("Enter string name");
    scanf("%s", a);
    while(a[i]!='\0')
    i++;
    printf("string length is %d\n", i);
    return 0;
}