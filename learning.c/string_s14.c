#include<stdio.h>
#include<string.h>
int main()
{
    char str[20], str1[20];
    printf("Enter the first string:");
    scanf("%s", str);
    printf("Enter the second string:");
    scanf("%s", str1);
    strcat(str,str1);
    printf("%s",str);
    return 0;
}