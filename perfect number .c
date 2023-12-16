#include<stdio.h>
#include<conio.h>
int main()
{
    int n,Total=0;
    int i=1;
    printf("Enter the number to check that number is perfect number or not\n");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
            Total=Total+i;
            i++;


    }
    if(Total==n)
        printf("%d is an perfect number",n);
    else
    {
        printf("%d is not a perfect number ",n);
    }
    getch();
}
