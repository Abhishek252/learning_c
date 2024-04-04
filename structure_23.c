#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    int marks;
    char name[40];

};
int main()
{
    struct student s1 = {12, 89, "reva"};
    struct student *strptr;
    strptr = &s1;
    printf("student id %d\n", strptr->id);
    printf("student marks %d\n", strptr->marks);
    printf("student name %s\n", strptr->name);
    return 0;
}
