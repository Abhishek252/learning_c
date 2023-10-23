#include<stdio.h>
void multiply(void);
int main()
{
    multiply();
    return 0;
}
void multiply(void)
{
    int a,b, multiply;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    multiply= a*b;
    printf("\n multiply is %d",multiply);

}
