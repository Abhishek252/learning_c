#include<stdio.h>
void add(void);

int main()
{
    add();
    return 0;
}
void add(void)
{
    int a,b,sum;
    printf("\nEnter two Numbers");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("\n Addition=%d",sum);

}





