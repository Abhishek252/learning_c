#include<stdio.h>
#include<conio.h>
int main()
{
    FILE*  abc;
    abc = fopen("manshi.csv", "r");
    char schoolName[30];
    fgets(schoolName, 30, abc);
    fprintf(abc, "%s\n", schoolName);
    sscanf(schoolName,  "%[^,]", abc);
    fclose(abc);
    return 0;
}

