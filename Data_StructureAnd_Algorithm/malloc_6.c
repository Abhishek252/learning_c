#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter number n");
    scanf("%d", &n);

    ptr = (float*)calloc(n,sizeof(float));

    for(int i=0; i<n; i++)
    {
          printf("%d\n", ptr[i]);
    }
    return 0;
    


}