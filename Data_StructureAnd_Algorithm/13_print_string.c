#include<stdio.h>
#include<stdio.h>
int main()
{
    char str[39] = {'h', 'i', 'm','a', 'n', 's', 'h', 'i', '\0'};
    char str2[39];
    strcpy(str2,str);
    printf("%s", str2);
    return 0;
}