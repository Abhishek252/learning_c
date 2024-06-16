#include<stdio.h>
int main()
{
    int i[4]; 
    int j , addition =0;
    printf("Enter the value for addition & press Enter key after enterning each value\n");
    for(j=0; i<=4; j++)
    {
        scanf("%d", &i[j]);
    }

    for(j=0; j<=4; j++)
    {
        addition = addition +i[j];
    }

    printf("\n additino of all values = %d", addition);
    return 0;

}