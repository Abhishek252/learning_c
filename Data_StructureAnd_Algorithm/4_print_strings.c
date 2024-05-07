#include<stdio.h>
int main()
{
    char str[] = " Hello World !";
    int length = sizeof(str)/ sizeof(str[0]);
    for(int i=0; i<length; i++)
    {
        printf("%c\n" ,str[i]);
        



    }
    return 0;
}