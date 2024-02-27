#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "Himanshi\n";
    char str2[]=  "Rinki";
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}
