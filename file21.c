#include<stdio.h>
int main()
{
    FILE *fp;
    char bookname[30];
    int n;
    fp= fopen("hindi.txt", "r");
    fgets(bookname, 30, fp);
    printf("Enter bookname");
   // scanf("%s\n", bookname);
    n = ftell(fp);
    printf("Total sizeof file %d\n bytes", n);
    fclose(fp);
    return 0;
}