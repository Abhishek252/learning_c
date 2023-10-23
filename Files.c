#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","a");
    char cityName[50];
    fgets(cityName,50,fptr);
    printf("Enter a cityName\n");
    scanf("%s",&cityName);
    fclose(fptr);
    return 0;
}
