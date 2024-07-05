#include<stdio.h>
#include<stdio.h>
int main()
{
    char name[30] ;
    printf("Enter name");
    scanf("%s", name);
    printf("reverse name %s\n", strrev(name));
    return 0;

}