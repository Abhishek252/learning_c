#include<stdio.h>
#define True 0
#define FALSE 1

int main()
{
    int array[10] =  {1,2,3,4,5,6,7,8,9, 10};
    int left =0;
    int right =10;
    int middile = 0;
    int number = 0;
    int bsearch = FALSE;
    int i=0;


    printf("ARRAY");
    for(i=0; i<=10; i++)

        printf("[%d]", i);
        printf("\n search for number :");
        scanf("%d", &number);

        while (bsearch == FALSE && left <= right)
        {
            middile = (left +right)/2;

            if(number == array[middile]){
                bsearch = True;

                printf("**Number found **\n");
            }
            else{
            if(number == array[middile])left = middile-1;
            if(number == array[middile])right = middile+1;

            }

                  
        }

        if(bsearch == FALSE)
        printf("-- Number Not found --\n");
        return 0;

    
}