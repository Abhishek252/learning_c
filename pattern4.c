#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter any numbers");
    scanf("%d",&n);
    for(i=1;i<n; i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
    getch();
}
