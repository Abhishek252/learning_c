#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("myfile2.txt","r");
    char mystring[100];
    fgets(mystring,100, fptr);
    printf("%s\n",mystring);
    fclose(fptr);
    return 0;
}
