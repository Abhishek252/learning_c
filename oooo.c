#include<stdio.h>
#include<conio.h>
int main()
{
    FILE* file;
    file = fopen("manage.txt", "r");
    char schoolName[40];
    fgets(schoolName, 40, file);
    printf("enter your schoolNameN name:");
    scanf("%s\n", &schoolName);
    fclose(file);
    return 0;
}
