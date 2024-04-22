#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    int rollnumber;
    char name[50];
    file = fopen("me.txt", "w");
    printf("Enter your rollnumber\n");
    scanf("%d", &rollnumber);
    printf("Enter your name");
    scanf("%s", name);
    fprintf(file, "%d%s", rollnumber, name);
    fclose(file);
    getch();
    return 0;
}