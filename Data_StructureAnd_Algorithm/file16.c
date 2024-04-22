#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *bca;
    char ch ;
    bca = fopen("bca.txt", "r");
    while(ch = getc(bca)!= EOF)
    {
        printf("%c", ch);

    }
    fclose(bca);
    return 0;


}