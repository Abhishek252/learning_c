#include<stdio.h>
int main()
{

    FILE *file;
    file = fopen("st.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name");
    scanf("%s", name);
    printf("Enter age");
    scanf("%d", &age);
    printf("Enter cgpa");
    scanf("%f", cgpa);

    fprintf(file, "%s", name);
    fprintf(file, "%d", age);
    fprintf(file, "%f", cgpa);
    fclose(file);
    return 0;
}
