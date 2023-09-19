#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("filename.txt","w");
    fprintf(fptr,"some text");
    fclose(fptr);
    'return0';
}
