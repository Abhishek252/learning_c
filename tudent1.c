#include<stdio.h>
#include<string.h>

struct student
{
    int studentId;
    int studentAge;
    char studentName[40];

};

int main()
{
    struct student s1 ={34 , 45, "reva"};
    printf("%d\n %d\n %s\n", s1.studentId , s1.studentAge, s1.studentName);
    return 0;

}