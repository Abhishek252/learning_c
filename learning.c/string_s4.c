#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string name:");
    fgets(str,"%s", stdin);
    printf("string Name is = %s\n", str);
    return 0;
}