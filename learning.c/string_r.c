#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20], ch1[30];
    printf("Enter first number:");
    scanf("%s", ch);
    printf("Enter second number:");
    scanf("%s", ch1);
    printf(" reverse the first string:%s\n ", strrev(ch));
    printf(" reverse the second string:%s\n ", strrev(ch1));
    return 0;
    
}