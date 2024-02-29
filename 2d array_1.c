#include<stdio.h>
#include<conio.h>
int main()
{
    int matrix[2][3] = {{3,4,5},{6,7,8}};
    matrix[2][2]=9;
    printf("%d\n",matrix[2][2]);
    return 0;
}
