#include<stdio.h>
#include<string.h>
struct employee
{
    int id_no;
    char name[40];
    char designation[40];
    int salary;

};

int main()
{
    struct employee emp1;
    emp1.id_no = 45;
    strcpy(emp1.name, "Abhi");
    strcpy(emp1.designation, "Manager");
    emp1.salary = 17775;

    printf(" The employee id_no is : %d\n", emp1.id_no);
    printf("The employee name is : %s\n", emp1.name );
    printf("The employee designation is : %s\n", emp1.designation);
    printf("The employee salar is : %d\n", emp1.salary);
    return 0;
}
