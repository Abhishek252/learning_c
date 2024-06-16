#include<stdio.h>
#include<string.h>
typedef struct ComputerEngeeringStudent
{
    int id;
    int roll;
    char name[100];
} coe;

int main()
{
    coe s1;
    s1.id = 12;
    s1.roll = 45;
    strcpy(s1.name, "manshi");

    printf("%d\n", s1.id);
    printf("%d\n", s1.roll);
    printf("%s\n", s1.name);
    return 0;
}