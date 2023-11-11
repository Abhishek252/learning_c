#include<stdio.h>
int main()
{
    int a[5];
    int i;
    for(i=0;i<5; i++)
    {
        printf("Enter number\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
