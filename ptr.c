#include<stdio.h>
int main()
{
    int mynumber[4] = {5,7,8,9};

    *mynumber = 13;
    *(mynumber+1)=17;
    printf("%d\n",*mynumber);
    printf("%d\n",*(mynumber+1));
    return 0;

}
