#include<stdio.h>
typedef struct
{
    int rollno;
    char name[30];
    int age;

}Student;
int main()
{
    Student s1;
    s1.rollno= 23;
    strcpy(s1.name, "Ram");
    s1. age= 18;
    printf("s1 rollno: %d\n",s1.rollno);
    printf("s1 name:%s\n",s1.name);
    printf("s1 age:%d\n",s1.age);
    return 0;
}
