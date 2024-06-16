#include<stdio.h>
#include<string.h>
int main()
{
    char a[] = "Manshi";
    char *p;
    int i,l;
    p = a;
    l= strlen(a);

    for(i=0; i<l; i++)


    printf("%c\n",  *(p+i));
    return 0;
}