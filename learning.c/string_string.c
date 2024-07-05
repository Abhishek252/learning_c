#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    char ch2[20];
    strcmp(ch,ch2);
    printf("Enter the two string\n");
    printf("Enter first string\n");
    scanf("%s", ch);
    printf("Enter second string\n");
    scanf("%s",ch2);
    if(strcmp(ch,ch2)==0)
    {
        printf("the string is equal\n");
    }
    else
    {
        printf("The string is different\n");
    }
    return 0;
}