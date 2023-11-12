#include<stdio.h>
void sub();
int main()
{
    sub();
    return 0;
}
void sub()
{
    int a,b,c;
    printf("Enter two value");
    scanf("%d",&a,&b);
    c = a-b;
    printf("\n subtraction is %d",c);

}
