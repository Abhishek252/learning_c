#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Thirdfile.txt", "a");
    char weekName[30];
    fgets(weekName,30,fptr);
    printf("Enter your weekName");
    printf("%s",weekName);
    fclose(fptr);
    return 0;
}
