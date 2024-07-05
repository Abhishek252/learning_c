#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("test1.txt", "w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter name :" );
    scanf("%s", name);
    printf("Enter age\n : ");
    scanf("%d", &age);
    printf("Enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(ptr, "%s\n", name);
    fprintf(ptr, "%d\n", age);
    fprintf(ptr, "%f", cgpa);
    fclose(ptr);
    return 0;
}