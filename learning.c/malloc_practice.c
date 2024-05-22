#include<stdio.h>
#include<stdlib.h>

int main(){
// {
//     int *ptr;
//     int n;
//     printf("Enter the size of the array you want to create \n");
//     ptr = (int*)malloc(n *sizeof(int));
//     scanf("%d", &n);
//     for(int i=0; i<n; i++)
//     {
//         printf("Enter the value of no %d the array of \n", i);
//         scanf("%d", &ptr[i]);

//     }

//     for(int i=0; i<n; i++)
//     {
//         printf("the value at no %d the array of %d\n", i, ptr[i]);
//     }
//     return 0;
// }


  int *ptr;
  int n;

  printf("Enter the size of array  you wany to create\n");
  scanf("%d", &n);
  
  ptr = (int *)calloc(n, sizeof(int));

  for(int i=0; i<n; i++)
  {
    printf("the value of no %d the array of this\n", i);
    scanf("%d", &ptr[i]);

  }
  for(int i =0 ; i<n; i++)
  {
      printf("The value of no %d the array of this %d\n",i, ptr[i]);

  }

 // use of realloc

 printf("Enter the size of new  array you want to create \n");
 scanf("%d", &n);

 ptr = (int*)realloc (ptr, n*sizeof(int));

 for(int i=0; i<n; i++)
 {
    printf("the value of no %d the array of this array \n", i);
    scanf("%d", &ptr[i]);

 }

 for(int i= 0 ;i<n ; i++)
 {
    printf("The value at no %d the array of this %d\n", i, ptr[i]);
 }

 free(ptr);
  return 0;


}



