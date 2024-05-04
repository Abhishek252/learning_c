#include<stdio.h>

int main()
{
    int age[] = {21, 20, 33, 45, 67};
    int i;
    int length = sizeof(age)/ sizeof(age[0]);
    for(i = 0; i<5; i++)
    {
    
           printf("the age is %d\n", age[i]);
          printf("the length is %lu\n", length);
        
    }
    return 0;
}