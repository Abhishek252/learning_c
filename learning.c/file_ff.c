#include<stdio.h>
int main()
{
    FILE *P;
    char ch[300];
    P= fopen("abhi.txt", "r");
    fgets(ch, 300, P);
    printf("%s",ch );
    fclose(P);
    return 0;




}