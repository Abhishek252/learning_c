#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter two number swapping");
    scanf("%d",&a);
    printf("Before the swapping first%d\n",a);
    scanf("%d",&b);
    printf("After the swapping second %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("The swapping a=%d,b=%d\n",a,b);
    getch();


}
