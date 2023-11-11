#include<stdio.h>
#include<conio.h>
void multi(void); // Decleration
int main()
{
    multi(); // Function Call
    return 0;
    getch();

}
void multi()
{
    int a,b , c;
    printf("\n Enter two number");
    scanf("%d%d",&a,&b);
    c= a*b;
    printf("\n multiplication = %d",c);

}
