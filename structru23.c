#include<stdio.h>
#include<string.h>

struct employee

{
    int id;
    float salary;
    char name[45];

};

struct employee emp1;

int main()
{
    emp1.id = 45;
    emp1.salary = 4567;
    strcpy(emp1.name, "nishu");

    printf("employee id %d\n", emp1.id);
    printf("employee salary %f\n", emp1.salary);
    printf("employee name %s\n", emp1.name);
    return 0;

}
