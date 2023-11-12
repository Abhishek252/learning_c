#include<stdio.h>
int add(int ,int); //Decleration
int main()
{
    int a,b, ans;
    printf("Enter first value");
    scanf("%d",a);
    printf("Enter secound value");
    scanf("%d",&b);
    add(a,b);  // Function call
    printf("\n Addition is %d",ans);
    return 0;
}
int add (int x, int y)  // Function definition
{
    int c;
    c= x+y;
    return c;
}
