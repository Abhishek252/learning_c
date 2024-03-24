#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char ch[50] = "I am manshi";
    char ch2[40] = "you are abhi";
    strcat(ch, ch2);
    printf(" The value is %s\n", (ch) );
    return 0;
}
