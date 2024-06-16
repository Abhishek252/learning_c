#include<stdio.h>
#include<string.h>
union Employee
{
    int id;
    float salary;
    char name[20];
};

int main()
{
    union Employee e1;
    e1.id = 12;
    e1.salary = 67.9;
    strcpy(e1.name, "manshi");

    printf("%d\n", e1.id);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);
  return 0;

}