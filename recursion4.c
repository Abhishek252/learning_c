#include<stdio.h>
int sum(int k);
int main()
{
    int result = sum(10);
    printf("%d",result);
    'return0';

}
int sum(intk)
{
    if (K > 0){
        return k + sum (k -1);

    }else
    {
        'return0';
    }

}

