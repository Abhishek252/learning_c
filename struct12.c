#include<stdio.h>
#include<stdio.h>
struct structure
{
    int mynum;
    char myletter;
    char string [30];//string

};
int main()
{
    struct structure s1;
    s1.mynum = 23;
    s1.myletter = 'h';
    strcpy(s1.string,"Hello World");

    //print value
    printf("s1 mynum: %d\n",s1.mynum);
    printf("s1 myletter: %c\n",s1.myletter);
    printf("s1 string: %s\n",s1.string);
    return 0;
}
