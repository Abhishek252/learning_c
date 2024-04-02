#include<stdio.h>
struct student
{
    int id_no;
    char name[40];
    float fee;
    int marks;

};
int main()
{
    struct student a[5];
    int j;
    for(j = 0; j<5; j++)
    {


       printf("Enter student id_no");
       scanf("%d", &a[j]. id_no);
       printf("Enter student name");
       scanf("%s", a[j].name);
       printf("Enter student fee");
      scanf("%f", &a[j].fee);
      printf("Enter student marks");
      scanf("%d", &a[j].marks);

    }
    return 0;
}
