#include<stdio.h>
#include<string.h>
void encrypt(char *c)
{
    char *ptr = c;
    while(*ptr!='\0')
    {
        *ptr = *ptr+1;
        ptr++;
    }
}

int main()
{
    char c[] = "my name is himanshi mishra i live at  gopalpur bhitari.";
    encrypt(c);
    printf("encrypt string is %s", c);
    return 0;
}