#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{    FILE* file;
     file = fopen("std.txt", "r");
    char fullname[50] = "my name is himanshi mishra";
    printf("%s", fullname);
    fgets(fullname, 50, stdin);
    fclose(file);
    return 0;
}

