gitadd .
#include<stdio.h>
#include<string.h>
struct mystructure
{
    int mynum;
    float myfloat;
    char mystring[40];


};
int main()
{
    struct mystructure str;
    str.mynum = 56;
    str.myfloat = 22.6;
    strcpy(str.mystring,"C programming");

    //print value
    printf("%d\n %f\n %s\n", str.mynum, str.myfloat, str.mystring);
    return 0;
}
