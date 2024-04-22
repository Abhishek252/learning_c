#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    char str[100];
    file = fopen("book.txt", "w");
    fputs("you are  great ", file);
    printf("%s", str);
    fclose(file);
    getch();
    return 0;
}