#include<stdio.h>
struct mystructure
{
    int myNum;
    char myChar;
};
int main()
{
    struct mystructure s1;
    struct mystructure s2;

    s1.myNum = 45;
    s1.myChar = 'p';

    s2.myNum = 20;
    s2.myChar = 'v';

    printf("s1 mynum: %d\n",s1.myNum);
    printf("s1 mychar: %c\n",s1.myChar);

    printf("s2 mynum: %d\n",s2.myNum);
    printf("s2 mychar: %c\n",s2.myChar);
    return 0;
}
