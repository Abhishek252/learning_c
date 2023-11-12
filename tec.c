#include<stdio.h>
int sqr(void);
int main()
{
    int ans;
    ans= sqr();
    printf("squre is %d\n",ans);
    return 0;
}

int sqr(void)
{
    int s;
    printf("Enter a value");
    scanf("%d",&s);
    return(s*s);
}
