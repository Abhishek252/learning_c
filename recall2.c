#include<stdio.h>
#include<conio.h>
void main()
{
    int x , y , c;
    printf("Enter swapping two numners");
    scanf("%d%d", &x, &y);
    c = x;
    x = y;
    y = c;
    printf("the swapping xis %d and y is %d\n", x, y);
    getch();


}
