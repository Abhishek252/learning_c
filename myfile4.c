#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("myfile2.txt","a");
    fprintf(fptr,"Good night");
    fclose(fptr);
    return 0;
}
