#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("student.txt","w");
    fprintf(fptr, "Hello World!");
    fclose(fptr);
    return 0;
}
