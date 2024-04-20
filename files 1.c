#include<stdio.h>
int main()
{

    FILE *x;
    int ch;
    x = fopen("exam.txt", "r");
    if(x == NULL)
    {
        printf("Error the opening file\n");
        return 1;
    }
    ch=fgetc(x);
    if(ch==EOF)
    {
        printf("Erroe reding from the file\n");
        fclose(x);

    }
    return 0;

}

