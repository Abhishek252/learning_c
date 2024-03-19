#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()

{    int n, i, *p, sum = 0;
    printf("enter number of element ");
    scanf("%d\n", &n );
    p = (int *) malloc (n * sizeof(int));
    if(p == NULL);
    printf("Error memory not allocated");
    exit(0);

    printf("enter element");
    for(i =0; i < n; i++)
    {
        scanf(" %d\n", p + i);
        sum +  *(p + i);
        printf(" sum = %d", sum);
        free(p);
    

    }
    getch();
    return 0;

}