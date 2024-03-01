#include<stdio.h>
#include<conio.h>
void swap(int *,int*);
int main()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    swap(&a,&b);//Call by reference
    printf("a=%d, b=%d",a,b);
    return 0;


}
void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
