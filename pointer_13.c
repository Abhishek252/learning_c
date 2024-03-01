#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
      int a,b;
      printf("Enter two number swapping\n");
      scanf("%d%d",&a,&b);
      swap(&a,&b);
      printf("a=%d,b=%d",a,b);
      return 0;

}
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;

}
