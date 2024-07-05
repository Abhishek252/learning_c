#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    char *found;
    printf("Enter two strings:\n");
    scanf("%s", str1, str2);
    found = strstr(str1,str2);
    printf("strin two is found at position %d in string 11\n ", found-str1);
    return 0;

}