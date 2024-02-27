#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("data2.txt", "w");
    char mobileNumber[100];
    fputs( "Enter mobileNumber",fptr);
    fclose(fptr);
    return 0;
}
