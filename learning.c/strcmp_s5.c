#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20] ;
    char s2[20];

    printf("Enter two string\n");

    printf("Enter first string\n");
    scanf("%s", s1);

    printf("Enter second string\n");
    scanf("%s", s2);

    if(strcmp(s1,s2)==0)
    {
        printf(" Equal string %s%s\n", s1,s2);
    }

    else
    {
        printf("Different string %s%s\n", s1,s2);
    }

    return 0;

}