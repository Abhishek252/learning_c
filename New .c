#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("second.txt", "a");
    char carName[100];
    fgets(carName, 100, fptr);
    printf("%s",carName);
    fclose(fptr);
    return 0;
}

