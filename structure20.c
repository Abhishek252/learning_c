#include<stdio.h>
int main()
{
    int data;
    printf("Enter data");
    scanf("%d", &data);
    switch(data)
    {
        case 1:
        printf("Good");
        break;
        case 2:
        printf("best");
        break;
        case 3:
        printf("better");
        case 4:
        printf("Fine");
        break;
        case 5:
        printf("Excellent");
        break;
        

    }
    return 0;

}
