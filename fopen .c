#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("data.txt", "a");
    char mobileNumber[100];
    fprintf(fptr, "Enter mobileNumber");
    fclose(fptr);
    return 0;
}
