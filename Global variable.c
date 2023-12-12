#include<stdio.h>
#include<conio.h>
int a,b,result;
void main()
{
    sum();
    sub();
    getch();


}
sum()
{
    printf("Enter two number to find their sum\n");
    scanf("%d%d",&a,&b);
    result=a+b;
    printf("\n the sum of two number is %d",result);
    return 0;

}
sub()
{
    printf("Enter two number to find their difference\n");
    scanf("%d%d",&a,&b);
    result=a-b;
    printf("\n the difference of two number is %d",result);
    return 0;
}
