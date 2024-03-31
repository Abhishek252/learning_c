#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    printf("enter the 1 str1");
    gets(str1);
    printf("enter the 2 str2");
    gets(str2);
    if(strcmp(str1 , str2) == 0)
        printf("strings are equal");
    else
        printf("strings are not equal");
    return 0;

}
