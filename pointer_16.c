#include<stdio.h>
#include<conio.h>
int main()
{
    int myage= 34;
    int *ptr=&myage;
    printf("%d\n",myage);
    printf("%p\n",&myage);
    return 0;
}
