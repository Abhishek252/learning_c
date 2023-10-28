#include<stdio.h>
typedef union Employee
{
    int id;
    float salary;
    char name[30];
} Employee;

int main()
{
    Employee u1;
    u1.id = 88;
    printf("u1 id: %d\n",u1.id);
    u1.salary = 554.6;
    printf("u1 salary: %f\n", u1.salary);
    strcpy(u1.name, "tarun");
    printf("u1 name: %s\n",u1.name);
    return 0;
}
