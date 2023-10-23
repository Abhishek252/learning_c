#include<stdio.h>
void division(void);
int main()
{
    division();
    return 0;

}
void division(void)
{
    int x,y,division;
    printf("Enter two number\n");
    scanf("%d%d",&x,&y);
    division=x/y;
    printf("\ndivision is %du",division);
}
