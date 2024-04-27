#include<stdio.h>
#include<conio.h>
int main()
{
    int array[] = { 7, 12, 3, 9, 11};
    int n = sizeof(array)/ sizeof(array[0]);
    for(int i = 0; i< n-1; i++)
    {  int value;
       for(int j = 0; j<n-i-1; j++){
       
       if(value < array[i]){

        value = array[j-1]; 
       }

        printf("%d\n", array[i]);
       }
       int min_value= array[value];
       for(int i = 0 ; i < n; i++)
       {
        printf("%d\n", array[i]);
       }

       printf("\n");

    }
    return 0;
}