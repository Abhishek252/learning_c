#include<stdio.h>
#include<string.h>

struct student
{
    int id_no;
    int fee;
    int marks;
    char name[30];


};
int main()
{
    struct student s1;
    printf("Enter id_no");
    scanf("%d", &s1.id_no);
    printf("Enter fee");
    scanf("%d", &s1.fee);
    printf("Enter marks");
    scanf("%d", &s1.marks);
    printf("Enter name");
    scanf("%s",s1.name);

    printf("\n student of details");
    printf("\n student id_no : %d", s1.id_no);
    printf("\n student fee : %d", s1.fee);
    printf("\n student marks : %d", s1.marks);
    printf("\n student name : %s",s1.name );
    return 0;

}
