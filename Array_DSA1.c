#include<stdio.h>
int main(){


    int my_Array[] = {7, 12, 9, 4, 11};

    int size = sizeof(my_Array)/ sizeof(my_Array[0]);

    int myVal = my_Array[0];

    for(int i = 0; i < size ; i++){


        if(my_Array[i] > myVal){

            myVal = my_Array[i];

        }
        
    }

    printf("the highest value of : %d\n", myVal);
    
    return 0;
}
