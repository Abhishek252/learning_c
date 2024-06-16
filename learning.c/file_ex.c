#include<stdio.h>
int main()
{

    FILE *ptr;
    ptr = fopen ("s1.txt", "w");

    char name[20];
    int age;
    int marks;

    printf("Enetr name : ");
    scanf("%s", name);
    printf("Enter age:");
    scanf("%d", &age);
    printf("Enter cgpa:");
    scanf("%d", &marks);

    fprintf(ptr,  "student name = %s\n", name );
    fprintf(ptr,  "student age  = %d\n", age );
    fprintf(ptr,  "student marks = %d", marks);

    fclose(ptr);
    return 0;

}