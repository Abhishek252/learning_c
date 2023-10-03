#include<stdio.h>
void starpatter (int rows)
{
    for (int i = 0; i< rows; i++)
    {
        for (int j = i; j< i; i++)
        {
            printf("*");
        }
    }
        printf("\n");
}
int main()
{
    int rows;
    printf("How many rows do you want \n");
    scanf("%d",&rows);
    return0;
}
