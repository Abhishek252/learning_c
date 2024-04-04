#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    int salary;
    char name[40];

};

int main()
{
    struct employee emp1 = { 13, 2345, "vashu"};
    struct employee *e;
    e = &emp1;
    printf("employee id %d\n", e->id);
    printf("employee salary %d\n", e->salary);
    printf("employee name %s\n", e->name);
    return 0;

}