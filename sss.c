#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE* file;
    file = fopen("str.txt", "r");
    char ch[100] = "Compiler";
    printf("Length is string %d", strlen(ch));
    fclose(file);
    return 0;
}
