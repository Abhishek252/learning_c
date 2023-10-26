#include<stdio.h>
union myunion
{
    int myNum;
    char myChar;

};
int main()
{
    union myunion un;
    un.myNum= 20;
    un.myChar='p';

    printf("un.mynum:%d\n",un.myNum);
    printf("un.mychar:%c\n",un.myChar);
    return 0;

}
