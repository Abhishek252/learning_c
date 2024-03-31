#include<stdio.h>
struct myStructre
{
    int myNum;
    char myLetter;
    float myFloat;

};

int main()
{
    struct myStructre s1;
    s1.myNum = 82;
    s1.myLetter = 'c';
    s1.myFloat = 25.5;
    printf("Mynum %d\n",s1. myNum);
    printf("My letter %c\n ", s1. myLetter);
    printf("My float %.1f\n", s1.myFloat);
    return 0;
}
