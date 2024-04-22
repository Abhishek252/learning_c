#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *xyz;
    char str[50];
    xyz = fopen("std.txt", "r");
    fgets(str, 50, xyz);
    printf("%s", str);
    fclose(xyz);
    getch();
    return 0;
}