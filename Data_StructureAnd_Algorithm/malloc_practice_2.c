#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    
    printf("Enter number n:");
    scanf("%d\n", &n);
    ptr = (int*)malloc(5 *sizeof(int));
    for(int i=0; i<5; i++)
    {
        printf("%d\n", i, ptr);


    }
    
    return 0;
}