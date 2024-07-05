#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]= "Hello";
    char str2[] = "Hello";
    char str3[] = "hii";
    strcmp(str1,str2);
    printf("%d\n", strcmp(str1,str2));
    printf("%d\n", strcmp(str1,str3));
    return 0;
}