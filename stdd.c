#include<stdio.h>
#include<string.h>

struct structure
{
    int Number;
    char Letter;
    char string[30];

};

int main()
{
    struct structure s1 = {23 , 'p' , "Goods"};
    struct structure s2;

    s2 = s1;

    s2.Number = 24 ;
    s2.Letter = 'A';
    strcpy(s2.string , "Better");
    printf("%d\n %c\n %s\n", s1.Number, s1.Letter , s1.string);
    printf("%d\n %c\n %s\n", s2.Number, s2.Letter, s2. string);
    return 0;

}