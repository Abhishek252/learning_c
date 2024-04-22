#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *abc;
    int rollnumber;
    int marks;
    int id;
    char name[50];
    abc = fopen("student.txt", "r");
    printf("enter your rollnumber\n");
    scanf("%d", &rollnumber);
    printf("enter your marks\n");
    scanf("%d", &marks);
    printf("enter your id\n");
    scanf("%d", &id);
    printf("enter your name\n");
    scanf("%s", name);
    fscanf(abc, "%d%d%d%s", rollnumber,marks,id, name);
    fclose(abc);
    return 0;
    getch();
    

    
}