#include<stdio.h>
int main()
{
    FILE*fp;
    char str[40];
    int num;
    fp = fopen("abc.txt", "r+");
    printf("Enter str");
    scanf("%s", str);
    printf("Enter num");
    scanf("%d", &num);
    fprintf(fp, "%s%d", str,num);
    fclose(fp);
    return 0;
}