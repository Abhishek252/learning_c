#include<stdio.h>

int main()
{
    FILE* file;
    file = fopen("math.csv", "r");
    char name[100] ="manvi";
    fgets(name, 100, file);
    fputs(name, file);
    fclose(file);
    return 0;

}