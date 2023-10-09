#include<stdio.h>
int main()
{
    int myNum;
    char myChar;
    float myFloat;
    printf("Type a number and character and decimal");
    scanf("%d,%c,%f",&myNum,&myChar,&myFloat);
    printf("your number is %d\n", myNum);
    printf("your character is %c", myChar);
    printf("your decimal is %f\n", myFloat);
    return 0;

}
