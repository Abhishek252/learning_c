#include<stdio.h>

struct student
{
    int studentId;
    int studentAge;
    int studentMarks;
    char studentName[30];

};

int main()

{
    struct student s1;
    s1.studentId = 45;
    s1.studentAge = 30;
    s1.studentMarks = 82;
    strcpy(s1.studentName , "Himanshi Mishra");

    printf("studentId is %d\n", s1.studentId);
    printf("studentAge is %d\n", s1.studentAge);
    printf("studentmarks is %d\n", s1.studentMarks);
    printf("studentName is %s\n", s1.studentName);
    return 0;

}