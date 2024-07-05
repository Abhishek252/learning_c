#include<stdio.h>
int main()
{
    FILE *p;
    p = fopen("laddu.txt", "w");
    fputs("have a nice day", p);
    fclose(p);
    return 0;

}