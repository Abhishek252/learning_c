#include<stdio.h>
#include<string.h>
int main()
{
    char name[20] = "HIMANSHI";
    char name2[20] = "MISHRA";
    strcat(name, name2);
    printf("the strcat is = %s\n", name);
    return 0; 
}