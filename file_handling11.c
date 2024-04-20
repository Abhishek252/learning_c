#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("myfiles.txt", "r");
    char string[100];
    fgets(string, 100, file);
    printf("%s\n", string);
    fclose(file);
    return 0;
}
