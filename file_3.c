#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr  = fopen("name.csv","r");
    char Name[40];
    fgets(Name , 40, fptr);
    printf("Enter Name\n");
    scanf("%s\n",&Name);
    fclose(fptr);
    return 0;
}
