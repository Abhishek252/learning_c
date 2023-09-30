#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]= "Hello";
    char str2[]= "Hello";
    char str3[]= "Hi";
    //compare str1 and str2,and print the result
    printf("%d\n",strcmp(str1,str2));

    //compare str1 and str3 ,and print the result
    printf("%d\n",strcmp(str1,str3));
    'return0';
}
