#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen("filename.txt", "a");
    fprintf(fptr, "Hi himanshi");
    fclose(fptr);
    return 0;
}



