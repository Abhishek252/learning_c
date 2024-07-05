#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter any string");
    scanf("%s", str);
    printf("string is ->%s", str);
    for(i=0; i<=strlen(str); i++)
    {
        if(str[i]>=97&&str[i]<=22)
        str[i]=str[i]-32;

    }

    printf("\n the string in uppercase is ->%s", str);
    return 0;
}