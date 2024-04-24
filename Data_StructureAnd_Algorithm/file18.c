#include<stdio.h>
int main()
{
    FILE *fp;
    char str[10];
    int n;
    fp = fopen("xyz.txt", "r");
    fgets(str, 10, fp);
    printf("file contacts :%s\n", str);
    fseek(fp, 1, SEEK_SET);
    fputs("C programming language", fp);
    rewind(fp);
    fgets(str, 10, fp);
    printf("i wish, I could teach c programming :");
    fclose(fp);
    return 0;




}