#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("age.txt","w");
    char age[100];
    fgets (age, 100, file);
    printf("%s\n",age);
    scanf("%S\n", &age);
    fclose(file);
    return 0;

}
