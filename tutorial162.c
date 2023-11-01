#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("%d",age);

    switch(age)
    {
    case 1:
        printf("your age is: 18");
        break;

    case 2:
        printf("your age is: 19");
        break;
    case 3:
        printf("your age is: 20");
        break;


    }
    return 0;
}
