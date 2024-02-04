#include<stdio.h>
#include<conio.h>
int main()
{
    int r,c,num,v1=1;
    printf("Enter number");
    scanf("%d",&num);
    for(r=1;r<=num;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",v1);
            if(v1==1)
                v1=0;
            else
                v1=1;
        }
        printf("\n");
    }
    getch();
}
