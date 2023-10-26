#include<stdio.h>
union myunion
{
    int myNum;
    char myChar;

};
int main()
{
    union myunion un;
    un.myNum=20;
    printf("un.mynum:%d\n",un.myNum);
    un.myChar='v';
    printf("un.mychar:%c\n",un.myChar);
    return 0;
}
