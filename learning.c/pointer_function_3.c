#include<stdio.h>

void square(int *num)
{
    *num = (*num)*(*num);

}

int main()
{
    int number = 5;
    printf("the original number is %d\n", number);

    square(&number);

    printf("the square of the number is %d\n", number);
    return 0;
}

