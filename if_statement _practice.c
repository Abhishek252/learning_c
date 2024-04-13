#include<stdio.h>
int main()
{
    char ch;
    printf("Enter chracter");
    scanf("%c", &ch);
    if(ch>'A'&& ch<'Z')
    {
        printf("Uppercase");
    }
    else if(ch>'a' && ch<'z')
    {
        printf("Lowercase");

    }
    else
    {
        printf("wrong letter");
    }
    return 0;
}