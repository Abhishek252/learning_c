#include<stdio.h>
int subtraction (int ,int);
int main()
{
    int x,y,z;
    printf("Enter two number");
    scanf("%d%d",&x,&y);
    z=subtraction(x,y);
    printf("subtractionS is%d",z );

}
int subtraction(int a, int b)
{
    int c;
    return (a-b);
}

