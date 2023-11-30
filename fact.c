#include<stdio.h>
#include<conio.h>
#include<math.h>
long factorial (int);
void main()
{
    int i,n,c;
    printf("Enter the number of rows you wish to see in pascal triangle\n");
    scanf("%d",&n);
    for(i=0;i<n; i++)
    {
        for(c=0; c<=i; c++)
        printf(" ");
        for(c=0; c<=i; c++)
            printf("%1d ", factorial(i/ (factorial(c)* factorial (i-c))));
            printf("\n");
    }
    getch();
    return 0;


}
long factorial (int n)
{
    int c;
    long result =1;
    for(c=1 ; c<=n;c++)
        result= result*c;
    return(result);
}
