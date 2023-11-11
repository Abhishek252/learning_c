#include<stdio.h>
#include<conio.h>
void add(void);
int main()
{
    add();
    return 0;
    getch();

}
void add()
{
    int a,b, sum;
    printf("\n Enter two number");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("\n Addition= %d",sum);



}
