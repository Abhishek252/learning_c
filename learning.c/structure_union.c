#include<stdio.h>
int main()
{
    union u_example
    {
        float decval;
        int pnum;
        double my_value;

    }U1;

    U1.my_value = 125.5;
    U1.pnum = 10;
    U1.decval = 1000.5f;

    printf("\n decval = %fpnum = %d my_value = %1f",
    U1.decval , U1.pnum, U1.my_value);

    printf("\n U1 size = %d\n decval size = %d pnum size= %d my_value" 
    "size = %d ", sizeof(U1), sizeof(U1), decval, sizeof(U1.pnum), sizeof(U1.my_value));

         return 0;


}