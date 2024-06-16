#include<stdio.h>
#include<string.h>

struct student 
{
    int marks;
    int fee;
    char name[100];


};

int main()
{

    struct student s1;

    printf("Enter student marks\n");
    scanf("%d", &s1.marks);

    printf("enter student fee\n");
    scanf("%d", &s1.fee);

    printf("Enter student name \n");

    scanf("%s\n",s1.name );

    printf("***************student datails*****************");

    printf("\nstudent marks  = %d\n", s1.marks);
    printf("student roll  = %d\n", s1.fee);
    printf("student name  = %s\n", s1.name);
    

    return 0;



}