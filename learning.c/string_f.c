#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[] = "hello world";
    char ch2[30];
    srecpy(ch2,ch1);
    printf("Enter the first string is hello world\n");
    printf("Enter the second string is empty\n");
    printf("The string from the string 1 tog the string 2 gives\n", ch2);
    return 0;

}
