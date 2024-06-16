#include<stdio.h>
#include<conio.h>
int main()
{
    int i[4],j;
    int Addition=0;
    printf("Enetr the value for addition & press enter key after entering each value:");

    for(j=0; j<=4; j++)
    {
        scanf("%d\n", &i[j]);
    }

    for(j=0; j<=4; j++)
    {
        Addition = Addition+i[j];

    }

    printf("\nAddition of all values = %d", Addition);
    return 0;
}