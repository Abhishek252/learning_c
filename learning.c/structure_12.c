#include<stdio.h>
#include<string.h>
 struct student
 {

     char id_num [6];
    char name[11];
    char gender;
    int age;

 };

 int main()
 {
    struct student s1;

    printf("first of all , get of the struct : sizeof(struct student)");

    printf("Enetr student id number(5 max):");

    scanf("%s", s1.id_num);

    printf("Enter student name (10 max)");

    scanf("%s", s1.name );

    s1.gender = 'M';
    s1.age = 30;

    printf("\n----------------\n");
    printf("Id number = %d\n", s1.id_num);
    printf("Name  = %s\n", s1.name);
    printf("Gender = %c\n", s1.gender);
    printf("Age = %d\n", s1.age);

    printf("\n----------------\n");

    return 0;

 }
