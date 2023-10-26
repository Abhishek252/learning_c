#include<stdio.h>
#include<string.h>
union myunion
{
    int mynum;
    char mychar;
    char mystring[30];

};
int main()
{
    union myunion un;
    un.mynum = 45;
    un.mychar = 'R';
    strcpy(un.mystring, "Some text");


    printf("un mynum: %d\n",un.mynum);
    printf("un mychar: %c\n",un.mychar);
    printf("un mystring: %s\n",un.mystring);
    return 0;


}
