#include<stdio.h>
int main()
{
    int length, breadth;
    printf("what is the length of rectangle\n");
    scanf("%d", &length);

    printf("what is the breadth of rectangle \n");
    scanf("%d", &breadth);

    printf("the area of your rectangle is %d\n", length*breadth);
    return 0;
}