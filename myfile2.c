#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("myfile2.txt", "w");
    fprintf(fptr,"Good morning");
    fclose(fptr);
    return 0;
}
