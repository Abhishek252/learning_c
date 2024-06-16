#include<stdio.h>
#include<conio.h>
int main()
{
    int i[4]= {1,2,3,4},j;
    printf("the element in array after initialization");

    for(j=0; j<=4; j++)
    {
        i[j]=j;
        printf("\n i[%d]= %d",j,i[j] );

    }
    return 0;

}