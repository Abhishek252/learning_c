#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("data 1.txt","a");
    fprintf(fptr, "I am learing c!");
    fclose(fptr);
    return 0;
}
