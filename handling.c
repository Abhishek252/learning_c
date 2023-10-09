#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("second2.txt", "a");
    char dateofbirth[30];
    fgets(dateofbirth, 30, fptr);
    printf("Enter your dateofbirth");
    printf("%s", dateofbirth);
    fclose(fptr);
    return 0;
}


