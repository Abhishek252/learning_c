#include<stdio.h>
#include<stdio.h>
int main()
{
    int *ptr;
    int i;
    ptr = (int*)calloc(5, sizeof(int));
    if(ptr!=NULL)
    {
        *ptr=1;
        *(ptr+1)=2;
        ptr[2]=4;
        ptr[3] =16;
        ptr[4]= 32;

        ptr = realloc(ptr, 7*sizeof(int));
        if(ptr!=NULL)
        {
            printf("Now allocating mare memory..\n");
            ptr[5]=32;
            ptr[6]=64;
            for(i=0; i<7; i++){
            printf("ptr[%d]holds %d\n ", i,ptr[i]);

            }

           realloc(ptr,0);
        }
        else
    {
        printf("Not enough memory - realloc failed.\n");

    }

    }
    else
    {
        printf("Not enough memory - cealloc failed.\n");


    }
    getch();
    return 0;




}
