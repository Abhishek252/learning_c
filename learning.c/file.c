#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("temp.txt", "r");

    char str[30];
    fgets(str, 30, ptr);
    
    printf("this string is=  %s\n",str);
    fclose(ptr);
    return 0;
}
