#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()

{
   int *x, i, a[] = {10, 20, 30, 40, 50, 60};
   i = 0;
   x =&a[0];
   {

    printf("\n Adderess = %d ", x);
    printf("element = %d", *x);
    i++;
    x++;

   }
   getch();
   return 0;
}