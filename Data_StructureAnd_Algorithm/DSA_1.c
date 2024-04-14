#include<stdio.h>
int main()
{
    int arr[]= {1 , 2 , 3 , 4 , 5};

    int size = sizeof(arr)/ sizeof(arr[0]);

   printf("array");


   for(int i = 0; i < size; i++)
   {
    printf("%d\n" , arr);

   }
   reverse_array(arr , size);

   printf("Reversed Array :");
   for(int  i = 0 ; i < size ; i++){
        
   printf("%d" , arr[i]);

   }

   printf("\n");
   return 0;

}