#include<stdio.h>
int main()
{
    int myAge ;
    int *ptr, **pt, ***p, **** p1;
    ptr= &myAge, pt= &ptr, p= &pt, p1= &p;

    {
        printf("%d\n", &myAge);
        printf("%d\n", &ptr);
        printf("%d\n", &pt);
        printf("%d\n", &p);


        printf("%d\n", myAge);
        printf("%p\n", ptr);
        printf("%p\n", pt);
        printf("%p\n", p);
    
    
        

    


    }
    return 0;

}