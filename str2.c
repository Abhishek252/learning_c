#include<stdio.h>
#include<string.h>

struct employee
{
    int employeeAge;
    int employeeId;
    char employeeName[40];

};

int main()

{
    struct employee e1;
    e1.employeeAge = 36;
    e1.employeeId =  53;
    strcpy(e1.employeeName , "Vashu");

    printf("The employeeAge is %s\n", e1.employeeAge );
    printf("The employeeId is %d\n", e1.employeeId);
    printf("The employeeName is %s\n", e1.employeeName);
    return 0;
}