#include<stdio.h>
#include<string.h>
typedef struct ActiveEmployee
{

    int id ;
    int salary;
    char name[20];
} AE;

int main()
{
     AE a = {12, 345, "abhi"};

     printf("%d\n", a.id);
     printf("%d\n", a.salary);
     printf("%s\n", a.name);
    
    return 0;
}