#include<stdio.h>
int main()
{
    FILE *p;
    p = fopen("himanshi.txt", "r");
    char name[100];
    int age;
    float cgpa;
    printf("Enter name\n");
    scanf("%s", name);
    printf("Enter age\n");
    scanf("%d", age);
    printf("Enter cgpa\n");
    scanf("%f", cgpa);
    
    fscanf(p, "%s\n", name);
    fscanf(p, "%d\n", &age);
    fscanf(p, "%f\n", &cgpa);

    fclose(p);
    return 0;

}