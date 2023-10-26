#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] ="Good";
    char str2[] ="Good";
    char str3[] ="hi";
    printf("%d",strcmp(str1,str2));
    printf("%d",strcmp(str1,str3));
    return 0;

}
