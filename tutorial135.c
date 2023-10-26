#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("stdudent.txt","r");
    char string[50];
    fgets(string,50,fptr);
    printf("%s",string);
    fclose(fptr);
    return 0;
}
