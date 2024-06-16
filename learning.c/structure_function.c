#include<stdio.h>

typedef struct coords
{
    int x;
    int y;
    
}point;

void display(point pt);
int main()
{
    point pt1,pt2;
    pt1.x = 8;
    pt1.y= 16;
    pt2.x = 5;
    pt2.y = 10;

    display(pt1);
    display(pt2);
    return 0;
}

void display(point pt)
{
    printf("point x:%d ,y %d\n", pt.x, pt.y);
    
}