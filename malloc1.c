#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n, *ptr, sum = 0, i, *p;
    printf("Enter the sizeof array");
    scanf("%d", &n);
    ptr = (int *) malloc (n* sizeof(int));
    p = ptr;
    printf("Enter the element in array");
    for(i = 0; i<n; i++)
    {
        scanf("%d", ptr);
        sum =sum + *ptr;
        ptr++;


    } 
    printf("Enter array elements");
    for(i = 0; i < n; i++)
    {
       printf("%d\n", *p);
       p++;

    }
    printf("Addition of %d ", sum);
    getch();
}