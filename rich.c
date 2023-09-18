#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("filename.txt","r");
    char c=fgetc(fptr);
    printf("The character I read was %c\n",c);
    c=fgetc(fptr);
    printf("The character I read was %c\n",c);
    fclose(fptr);
    'return0';
}
