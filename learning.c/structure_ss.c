#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[30];
    char address[20];
    char combination[3];
    int age;
};

int main()
{     
    struct student s1;

        printf("Enter the student information\n");
        printf("Now enter the student id:\n");
        scanf("%d", &s1.id);

        printf("Enter the student name\n:");

        scanf("%s", s1.name);

        printf("Enter the student address\n:");
        scanf("%d", &s1.address);

        printf("Enter the student combination\n:");
        scanf("%d", &s1.combination);
        
        printf("Enter the student age\n:");
        scanf("%d", &s1.age);

        printf("student information\n");

        printf("student Id = %d\n", s1.id);
        printf("student Name = %s\n", s1.name);
        printf("student Address = %d\n", s1.address);
        printf("student Combination = %d\n", s1.combination);
        printf("Age of student  = %d\n", s1.age);


}

        
        


