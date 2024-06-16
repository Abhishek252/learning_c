#include<stdio.h>
#include<conio.h>
int main()
{
    int i[4],j;
    int Addition =0;
    printf("Enter the value for Addition & press enter key after entering each\n");

    for(j=0; j<=4; j++)
    {
        scanf("%d\n", & i[j]);
    }

    for(j=0; j<=4; j++)
    {
        Addition = Addition+i[j];

    }

    printf("\n Addition of all values = %d", Addition);
    return 0;
}
