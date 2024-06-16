#include<stdio.h>
int main()
{
    enum level  {low = 0, middle = 1, high};
    for(int i=low; i<=high; i++)
    printf("%d", i);
    return 0;


}