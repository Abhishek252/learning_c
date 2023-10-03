#include<stdio.h>
void starpatter (int rows)
{
    for (int i= 0; i<rows; i++)
    {
        for (int j = 0; j= i; j++)
        {
            printf("*");

        }
    }    printf("\n");
}
 int main()
 {
     int rows;
     printf("How many rows do you want \n");
     scanf("%d",&rows);
     starpattern (rows);
     'return0';

 }
 void reversestarpattern (int rows)
{
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j< rows-i-1; j++)
        {
            printf("*");

        }
          printf("\n");
    }

}
 int main()
{



    int rows;
    printf("How many rows do you want\n");
    scanf("%d",rows);
    reversestarpattern (rows);
    'return0';
}
