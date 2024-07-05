#include<stdio.h>
#include<string.h>
int main()
{
    char string1[] = "hello world";
    char string2[20];
    strcpy(string2,string1);
    printf("The first string is hello world\n");
    printf("The first string is empyt\n");
    printf("The coping string from string 1 to string 2 gives %s\n", string2);
    return 0;
}