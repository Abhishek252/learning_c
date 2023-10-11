#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("coding.txt","a");
    char student[45];
    fgets(student, 45, fptr);
    printf("Enter your marks");
    printf("%d",student);
    fclose(fptr);
    return 0;
}
