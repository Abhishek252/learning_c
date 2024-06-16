#include<stdio.h>
#include<string.h>
typedef struct student
{
    int id;
    int roll;
    float fee;
    char name[20];
} stu;

int main()
{
    stu s1;
    s1.id = 12;
    s1.roll = 13;
    s1.fee = 290;
    strcpy(s1.name, "mahi");

    printf("student Id: %d\n", s1.id);
    printf("student Roll: %d\n", s1.roll);
    printf("student Fee :%f\n", s1.fee);
    printf("student Name: %s\n", s1.name);

    return 0;

}