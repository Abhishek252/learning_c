#include<stdio.h>
#include<conio.h.>
void main()
{
    int numbers;
    printf("Type a number");
    scanf("%d",&numbers);
    if(numbers<0)
    {
        numbers= -numbers;
        printf("The absolute value is %d \n ", numbers);
    }
    return 0;
}
