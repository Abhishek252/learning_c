#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int less;
    printf("Enter string");
    scanf("%s", str);
    less = strlen(str)-1;
    while(less>=0)
    {
        printf("%c", str[less]);
        less--;

    }

    printf("\n");
    return 0;
}