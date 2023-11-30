#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter Number/n");
    scanf("%d",&a);
    if(a%2==0)
    goto even ;
    else
        goto Odd;
    even:
        printf("\n Number is even ");
        return 0;
        Odd:
            printf("\n Number is Odd");
            return 0;
}
