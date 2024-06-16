#include<stdio.h>
int main()
{
    int num1[3], num2[3], num3[3];
    printf("******SUM OF TWO ARRAY*********");

    printf("Enter the element of first array\n");
    for(int i=0; i<3; i++ )
    {
        printf("Element ** %d** is\n",num1[i] );
        scanf("%d", &num1[i]);

    }
    printf("Enter the element of scaond array\n");
    for(int i=0; i<3; i++)
    {
        printf("element **%d** is\n", num2[i]);
        scanf("%d", &num2[i]);
    }

    printf("Sum is :\n\n");
    for(int i=0; i<3; i++)
    {
        num3[i] = num1[3]+num2[i];
        printf("%d\t", num3[i]);
    }
    return 0;

}