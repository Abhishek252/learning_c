#include<stdio.h>
#include<stdio.h>

struct stdudent
{
    int roll_no;
    int scolarship;
    int marks;
    char name[30];

};

int main()

{
    struct stdudent mansi, nitya, rishu;
    mansi.roll_no = 1;
    mansi.scolarship = 17775;
    mansi.marks = 90;
    strcpy(mansi.name, "himanshi mishra");

    nitya.roll_no = 2;
    nitya.scolarship = 1800;
    nitya. marks = 80;
    strcpy(nitya.name, "nityanand mishra");

    rishu.roll_no = 3;
    rishu.scolarship = 59000;
    rishu. marks = 70;
    strcpy(rishu.name, "rishikesh mishra");

    printf("%d\n", mansi.roll_no);
    printf("%d\n", mansi.scolarship);
    printf("%d\n", mansi.marks);
    printf("%s\n", mansi.name);

    printf("%d\n", nitya.roll_no);
    printf("%d\n", nitya.scolarship);
    printf("%d\n", nitya.marks);
    printf("%s\n", nitya.name);

    printf("%d\n", rishu.roll_no);
    printf("%d\n", rishu.scolarship);
    printf("%d\n", rishu.marks);
    printf("%s\n", rishu.name);

    printf("\n Enter student of details");
    printf("\n student roll_no %d", mansi.roll_no);
    printf("\n student scolarship %d", mansi.scolarship);
    printf("\n student marks %d", mansi.marks);
    printf("\n student name %s\n", mansi.name);

    printf("\n student roll_no %d", nitya.roll_no);
    printf("\n student scolarship %d", nitya.scolarship);
    printf("\n student marks %d", nitya.marks);
    printf("\n student name %s\n", nitya.name);

    printf("\n student roll_no %d", rishu. roll_no);
    printf("\n student scolarship %d", rishu.scolarship);
    printf("\n student marks %d", rishu.marks);
    printf("\n student name %s", rishu.name);

    return 0;



}
