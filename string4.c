#include<stdio.h>
int main()
{
    char a[]= {'S','c','h','o','o','i','\0'};
    char b[]= "School";
    printf("%lu\n",sizeof(a));
    printf("%lu\n",sizeof(b));
    return 0;
}


