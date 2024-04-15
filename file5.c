#include<stdio.h>
int main()
{

    FILE *file;
    file = fopen("fill.txt", "w");
    fprintf(file, "some text");
    fclose(file);
    return 0;
}
