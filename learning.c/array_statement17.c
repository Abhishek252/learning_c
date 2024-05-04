#include<stdio.h>
#include<conio.h>
int main()
{
    char c[4] ;
    printf("enter the character:");
    scanf("%c", &c[0]);
    printf("enter the charecter :");
    scanf("%c", &c[1]);
    printf("entr the character :");
    scanf("%c", &c[2]);
    printf("enter the charecter :");
    scanf("%c", &c[3]);


    printf(" the character is %c\n", c[0]);
    printf(" the character is %c\n", c[1]);
    printf(" the character is %c\n", c[2]);
    printf(" the character is %c\n", c[3]);

    getch();
    return 0;

}