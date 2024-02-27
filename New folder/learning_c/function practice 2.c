#include<stdio.h>
#include<conio.h>
void add();
int main()
{
    add();
    return 0;

}
void add()
{
    int a,b,c;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum of %d\n",c);
}
