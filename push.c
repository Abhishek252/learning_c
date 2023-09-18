#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("filename.txt","r");
    char str[4];
    fgets(str,5,fptr);
    printf("My string is %s\n",str);

    fclose(fptr);
    'return0';
}
