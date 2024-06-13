#include<stdio.h>
#include<string.h>

struct student 
{
    int roll;
    int cgpa;
    char name[100];

};

int main()
{
    struct student s1;
    s1.roll = 12;
    s1.cgpa = 7.8;
    strcpy(s1.name,  "manshi");

    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %d\n",  s1.cgpa);
    printf("student name  = %s\n", s1.name);

    return 0;
}