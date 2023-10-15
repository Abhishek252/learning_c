#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("File. txt" ,"a");
       char bookName[30];
    fgets(bookName, 30, fptr);
    printf("Enter bookName");
    scanf("%d",&bookName);
    fclose(fptr);
    return 0;
}