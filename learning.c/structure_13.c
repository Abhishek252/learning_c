#include<stdio.h>
#include<string.h>
struct student 
{
    int roll;
    int id;
    char name[100];
};

int main()
{
    struct student  s1 = {13, 34, "manshi"};

    printf("student roll = %d\n", s1.roll);
    printf("student id = %d\n", s1.id);
    printf("student name = %s\n", s1.name);

    return 0;
}