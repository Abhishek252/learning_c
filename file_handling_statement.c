#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{
    FILE*  abs;
    
    char line[40];
    char  new_book_name[40] = "Bookname";
    abs = fopen("math.txt", "r");
    if(abs == NULL)
    {
        fgets(line, 40, abs );
        printf("%s", line);
        scanf("%s\n", &line);
        fseek(line, strlen(line), SEEK_CUR);
        fprintf(abs, "%s\n", ",Bookname");
        fclose(abs);
        return 0;
    }
}   