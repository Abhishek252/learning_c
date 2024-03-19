#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n, i, *ptr, *p, multiply = 0;
    printf("Enter  the sizeof array");
    scanf("%d\n", &n);
    ptr = (int*) malloc (n*sizeof(int));
    p = ptr;
    printf("enter the element in array");
    for(i = 0; i< n; i++)
    {
        scanf("%d\n", ptr);
        multiply = multiply + *ptr;
        ptr;

        

    }
    
    printf(" Enter array elaments");

    for(i = 1; i < n; i++ )

    {
        printf("%d\n", *p);
        p++;

    }
    printf("multiply is %d\n", multiply );
    getch();
    return 0;

}