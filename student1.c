#include<stdio.h>
#include<string.h>

typedef struct student
{
    int id;
    int marks;
    char fav_char;
} student;
int main()
{
    student s1;
    s1. id = 78;
    s1. marks = 83;
    s1.fav_char = 'M';
    printf("s1 id: %d\n", s1.id);
    printf("s1 marks: %d\n",s1.marks);
    printf("s1 fav_char:%c\n",s1.fav_char);
    return 0;

}
