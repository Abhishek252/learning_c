#include<stdio.h>
#include<conio.h>
int main()
{
    int counter=0;
    int i,p;
    printf("Enter the value to check the number is prime or not");
    scanf("%d",&p);
    for(i=2;i<=p/2;i++)
    {
        if(p%i==0)
        {
            counter ++;
            break;

        }

    }
    if(counter ==0)
    {
        printf("%d is a prime number",p);

    }
    getch();

}
