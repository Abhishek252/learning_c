#include<stdio.h>
int main()
{
    char arr[] = {'(','(',')',')'};
    int i;
    arr[0] = '(';
    arr[1] = '(';
    arr[2] = ')';
    arr[3] = ')';

    for(i=0;i<4; i++)
    {
        printf("%c", arr[i]);
    }
    if(arr[0] == '(' && arr[1] == '(' && arr[2] == ')' && arr[3]== ')')
    {
        printf("This ia matching\n");
    }
    else
    { 
         printf("This is not matching\n");

    }

    return 0;


}