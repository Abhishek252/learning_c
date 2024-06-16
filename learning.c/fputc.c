#include<stdio.h>
int main()
{
    
    FILE *ptr ;
    ptr = fopen("cy.txt", "W");

    fputs("this is manshi ", ptr);
   // printf("the chracter is %s\n", ptr);
    fclose(ptr);
    return 0;
}