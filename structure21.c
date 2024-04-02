#include<stdio.h>
#include<string.h>
struct doctor
{
    int id_no;
    float salary;
    char name[40];


};

int main()
{
    struct doctor d1, d2;
    d1.id_no  = 90 ;
    d1.salary = 150000;
    strcpy(d1.name, " Dr.Reshma Mishra");
    d2 = d1;
    printf("doctor id_no : %d\n", d1.id_no);
    printf("doctor salary : %.1f\n", d1.salary);
    printf("doctor name : %s\n", d1.name);

    // print d2
    printf("\n doctor id_no : %d", d2.id_no);
    printf("\n doctor salary : %.1f", d2.salary);
    printf("\n doctor name : %s", d2.name);
    return 0;

}
