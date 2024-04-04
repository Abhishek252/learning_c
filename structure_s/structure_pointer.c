#include<stdio.h>
#include<string.h>

struct student 
{
    int id;
    int marks;
    char name[30];
};

int main()
{
    struct student s1 = {12, 80, "sakshi"};
    struct student *strptr;
    strptr = &s1;
    printf("id %d\n", strptr->id);
    printf(" marks %d\n", strptr->marks);
    printf("name %s\n", strptr->name);
}