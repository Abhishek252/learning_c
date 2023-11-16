#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b,c;
    printf("Enter data");
    scanf("%d%d%",&a,&b);
    printf("before swapping value of a=%d and value of b=%d",a,b);
    c=a;
    a=b;
    b=a;
    printf("After swapping value of a= %d and value of b= %d",a,b);
    return 0;


}
