#include<stdio.h>
int main()
{    FILE* file;
     file = fopen("name.txt", "r");
    char Gopalpur[30];
    printf("Enter your villagename\n");
    fgets(Gopalpur,30,file);
    printf("%s",Gopalpur);
    fclose(file);
    return 0;
}
