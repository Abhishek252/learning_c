#include<stdio.h>
int main()
{

    FILE *file;
    char name[50];
    file = fopen("first.txt", "w");
    fprintf(file, "good morning");
    fclose(file);
    return 0;
}
