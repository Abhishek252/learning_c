#include<stdio.h>

int main(){


    int my_array[5] = {8, 14, 10, 15, 18};

    int size = sizeof(my_array) / sizeof(0);

    int myVal = my_array[0];

    for(int  i = 0; i< size ; i++)
    {
        if(my_array[i] < myVal)

        {
            myVal = my_array[i];
        }
    }

    printf("lowest  value of : %d\n", myVal);
    return 0;



}