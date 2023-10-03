/*program for swapping without using temp variable*/
#include<stdio.h>
void main()
{
 int a,b;
     printf("Enter two number to swap");
     scanf("%d%d",&a,&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("a=%d\nb=%d\n",a,b);
     'return0';
}
