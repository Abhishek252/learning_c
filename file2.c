#include<stdio.h>
int main()
{
    FILE  *file;
    char ch = 'A';
    file = fopen("example 1.txt", "r");
    if(file == NULL);
    {
        printf("Error the opening file");
        return 1;
    }
    if(fputs(ch, file)!=NULL)
    {
        printf("error writing to the file\n");
        fclose(file);
        return 1;

    }
    fclose(file);
    return 0;
}
