#include<stdio.h>
int main()
{
    char ch[5];
    ch[0]= 'a';
    ch[1]= 'b';
    ch[2]= 'c';
    ch[3]= 'd';
    ch[4]= 'e';
    ch[5]= '\0';

    printf("%c", ch[0]);
    printf("%c", ch[1]);
    printf("%c", ch[2]);
    printf("%c", ch[3]);
    printf("%c", ch[4]);
    printf("%c", ch[5]);

    printf("****STRING*****");

    for(int i=0; i<5; i++)
    {
        printf("%c", ch[i]);
    }

    return 0;

}