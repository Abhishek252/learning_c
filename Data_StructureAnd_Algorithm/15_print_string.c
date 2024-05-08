#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "riya";
    char str2[20] = "rishu";
    char str3[20] =  "rinshu";
    printf("%d\n", strcmp(str1,str2));
    printf("%d\n", strcmp(str1,str3));
    return 0;

}