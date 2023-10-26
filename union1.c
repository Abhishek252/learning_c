#include<stdio.h>
#include<string.h>
union Date
{
    int i;
    float f;
    char str[30];

};
int main()
{
    union Date date;
    date.i=20;
    printf("date.i:%d\n",date.i);
    date.f=220.5;
    printf("date.f:%f\n",date.f);
    strcpy(date.str,"C programming");
    printf("date.str:%s\n",date.str);
    return 0;
}
