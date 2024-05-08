#include<stdio.h>
#include<string.h>
int main()
{    
    FILE* file;

    char *ptr = "programming is my favourite subject";
    file =fopen("himanshi.txt", "r");

    printf("%s", ptr);
    fclose(file);
    return 0;
    
}