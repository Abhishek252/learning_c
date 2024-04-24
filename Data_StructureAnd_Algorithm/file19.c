#include<stdio.h>
int main()
{
    FILE *fp;
    char bookname[40];
    fp= fopen("xy.txt", "r+");
    fgets(bookname, 40, fp);
    printf("file cntacts:%s\n", bookname);
    rewind(fp);
    printf("c learning");
    fclose(fp);
    return 0;


}