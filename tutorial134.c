#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("student.txt","a");
    fprintf(fptr,"Hii I am himanshi mishra");
    fclose(fptr);
    return 0;
}
