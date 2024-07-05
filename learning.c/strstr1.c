#include<stdio.h>
#include<string.h>
int main()
{
    char name[20] = "himanshi";
    char name2[20] = "RITIKA";
    printf("%s", strstr(name,name2));
    return 0;
}