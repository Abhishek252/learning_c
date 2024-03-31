#include<stdio.h>
struct Teacher
{
    int TeacherAge;
    char TeacherName[50];


};
int main()
{
    struct Teacher t1;
    t1.TeacherAge = 23;
    strcpy(t1.TeacherName, "sakshi");
    printf("Teacher age is %d\n", t1.TeacherAge);
    printf("Teacher name is %s\n", t1.TeacherName);
    return 0;
}
