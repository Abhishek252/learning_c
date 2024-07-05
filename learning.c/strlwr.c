#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter any string of length <= 30:");
    scanf("%s", str);
    printf("\n string after conversion :%s\n", strlwr(str));
    return 0;
}