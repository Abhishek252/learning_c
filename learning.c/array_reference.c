#include<stdio.h>
#define Size 10

void Modify(float *);

void main()
{
    float arr[Size] = {12,15,20,25,50,17,11,10,8,13};
    int i;
    printf("\t *** Modification by call by refrence *** \n\n");

    printf("\n Element of array brfore modification \n\n");

    for(i=0; i<Size ; i++)
    {
        printf("%.2f", arr[i]);
    }

    for(i=0; i<Size; i++)
    {
        Modify(&arr[i]);
        printf("\n\n\n element of array modification \n\n");

        for(i=0; i<Size; i++)
        {
            printf("%2.f\n", arr[i]);
            
        }
        printf("\n");
    }
    return 0;
}

void Modify(float *p)
{
    *p+=*p*.1;
}
