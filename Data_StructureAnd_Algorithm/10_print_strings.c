#include<stdio.h>
#include<string.h>
int strlen(char* st)
{
    char *ptr = st;
    int len =0;
    while(*ptr !='\0')
    {
        len ++;
        ptr ++;
    }
    return len;
}