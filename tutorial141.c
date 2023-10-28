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
    u1.id = 25;
    u1.salary = 250.6;
    strcpy(u1.name,"Harry");
    printf("u1 id: %d/n",u1.id);
    printf(" u1 salary: %f\n",u1.salary);
    printf("u1 name: %s\n",u1.name);
    return 0;
}
