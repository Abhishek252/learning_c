#include<stdio.h>
#include<string.h>

union student{

    int roll_no;
    int id;
    float percentage;
    char name[40];

};

int main(){

    union student s1;
    s1.roll_no = 12;
    s1.id = 45;
    s1.percentage = 82.8;
    strcpy(s1.name, "Manvi");

    printf("student rool_no %d\n", s1.roll_no);
    printf("student id %d\n", s1.id);
    printf("student percentage %.1f\n", s1.percentage);
    printf("student name %s\n", s1.name);
    return 0;
}