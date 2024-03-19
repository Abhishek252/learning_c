#include<stdio.h>
int main()
{
    FILE* file;
    file = fopen("text. txt", "r");
    printf("%s", "Some text");
    fclose(file);
    return 0;


}


