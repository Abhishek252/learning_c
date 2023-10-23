#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt", "a+");
    char schoolName[60];
    fgets(schoolName,60, fptr);
    printf("Enter a schoolName\n");
    scanf("%s",&schoolName);
    fclose(fptr);
    return 0;
}
