#include<stdio.h>
int main()
{
    char name[10] = {'h','i','m','a','n','s','h','i','\0'};
    int i;
    for(i=0; i<10; i++)
    printf("%c\n", name[i]);
    printf("%s", name);
    return 0;
}