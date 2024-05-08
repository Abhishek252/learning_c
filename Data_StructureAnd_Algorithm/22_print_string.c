#include<stdio.h>
#include<stdio.h>
int main()
{
    char str[9] = "Abhishek ";
    char str2[9] = {'A','B', 'H', 'I', 'S','H', 'E','K','\0'};
    char *ptr = str;
    while(*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr ++;
    }
    return 0;
    
}