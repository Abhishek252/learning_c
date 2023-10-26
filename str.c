#include<stdio.h>
#include<string.h>
struct mystructure
{
    int mynum;
    float myfloat ;
    char mystring[40];
};
int main()
{
    struct mystructure s1 = {13, 22.5, "some text"};

    struct mystructure s2;
    s2 = s1;
    //print value
    printf("%d\n %f\n %s\n", s2.mynum, s2.myfloat, s2.mystring);
    return 0;

}
