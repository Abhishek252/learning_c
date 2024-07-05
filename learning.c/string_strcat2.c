#include<stdio.h>
#include<string.h>
int main()
{   
    char str[20] = "my name is";
    char str2[20] =  "Himanshi Mishra";


    strcat(str, str2);
    printf("%s\n", str);
    return 0;
}