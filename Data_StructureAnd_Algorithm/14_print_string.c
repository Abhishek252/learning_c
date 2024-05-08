#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "Hello";
    char str2[20]= "Hello";
    char str3[20] = "Hi";
    printf("%d", strcmp(str1, str2));
    printf("%d", strcmp(str1,str3));
    return 0;
}