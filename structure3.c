#include<stdio.h>
struct mystructure
{
    int myNum;
    char myChar;

};
int main()
{
    struct mystructure s1;
    s1.myNum=24;
    s1.myChar= 'p';
    printf("%d\n",s1.myNum);
    printf("%c\n",s1.myChar);
    return 0;
}
