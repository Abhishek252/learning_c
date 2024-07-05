#include<stdio.h>
int main()
{
    char name[50];
    int i;
    printf("Enter name:");
    {
        for(i=0; i<=49; i++)
        {
            scanf("%s", name[i]);
            printf("name is= %s\n", name);
        }
        return 0;
    }

    
}