#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("filename.txt","w");
    fprintf(fptr,"some text");
    fclose(fptr);
   'return0';
