#include<stdio.h>
union Employee
{
    int id;
    float salary;
    char name[30];

};
int main()
{
    union Employee u1;
    u1.id = 48;
    printf("u1 id:%d\n",u1.id);
    u1.salary = 45.5;
    printf("u1 salary: %f\n", u1.salary);
    strcpy(u1.name, "shiv");
    printf("u1 name: %s\n",u1.name );
    return 0;

}
