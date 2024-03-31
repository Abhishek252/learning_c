#include<stdio.h>
#include<string.h>

struct employee
{
    int employeeAge;
    int employeeId;
    char employeeName[30];

};

int main()
{
    struct employee e1 = {35 , 45 , "piyush"};
    printf("%d\n %d\n %s\n", e1.employeeAge , e1.employeeId , e1.employeeName );
    return 0;
}
