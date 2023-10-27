#include<stdio.h>
int main()
{
    int mynum[4] ={50,60,70,80};
    printf("%d\n", *(mynum+1));
    printf("%d\n",*(mynum+2));
    return 0;
}
