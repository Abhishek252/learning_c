#include<stdio.h>
#include<string.h>
struct employee
{
    int id_no;
    char name[30];
    char designation[40];
    int salary;

};

int main()

{
    struct employee emp1;
    printf("enter id_no");
    scanf("%d", & emp1.id_no);
    printf("enter name");
    scanf("%s", emp1.name);
    printf("enter designation");
    scanf("%s", emp1.designation);
    printf("enter salary");
    scanf("%d", & emp1.salary);

    printf("\n employee of details");
    printf("\n employee id_no : %d",emp1.id_no);
    printf("\n employee name : %s", emp1.name );
    printf("\n employee designation : %s", emp1.designation);
    printf("\n employee salary : %s", emp1.salary);
    return 0;
}