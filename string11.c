#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE* file;
    file = fopen("st.txt", "r");
    char str[40] = "let me go";
    printf("length is string %d", strlen(str));
    fclose(file);
    return 0;
}