#include<stdio.h>
#include<stdlib.h>
#define END 10
int main()
{
    int *ptr1, *ptr2, *ptr3;
    int i;

    ptr1 =(int*)malloc(END*sizeof(int));

    printf("The allocation memory is : %d\n", END *sizeof(int));

    if(ptr1 ==NULL)
    {
        fprintf(stderr, "malloc() failed !\n");
        exit(1);

    }

    for(i=0; i<END; i++)
    {
        ptr1[i] = i+i;
        
    }
    
    ptr2 = (int*)calloc(END, sizeof(int));

    if(ptr2 == NULL)
    {
        fprintf(stderr, "calloc()failed!\n");
        exit(1);
    }

    ptr3 = ptr2;
    for(i=0; i<END; i++)
    {

        *(ptr3 ++)= i+i;

        printf("---Using malloc()---\n");
        printf("Array pointed by ptr1:\n");
        for(i=0; END; i++)
        {
            printf("%3d", ptr1[i]);

        }

        printf("\n\n");

        printf("---Using calloc() ---\n ");
        printf("Array pointed by ptr2:\n");

        for(i=0; i<END ; i++)
        {
            printf("%3d", ptr2[i]);

        }

        printf("\n\n");
    }
    return 0;

}