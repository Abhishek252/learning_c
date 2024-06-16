#include<stdio.h>
int main()
{
    char name[4];
    name[0]= 'D';
    name[1]= 'e';
    name[2]= 'v';
    name[3]= 'e';
    name[4] = '\0';

    printf("the name is %s\n", name);
    printf("the third name is %s\n", name[2]);
    printf("part of the name is %s\n", name[1]);
    return 0;
}