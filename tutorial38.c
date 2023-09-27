#include<stdio.h>
int main()
{
    Label;
    printf("We are inside label");
    goto end;
    printf("Hello world!");
    goto label;
    end:
        printf("We are at end");
        'return0';
}
