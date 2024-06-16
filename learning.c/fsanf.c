#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen ("newTest.txt", "r");

    char ch;
     fscanf(ptr, "%c", &ch);
     printf("character  = %c\n", ch);

    printf("character  = %c\n", ch);
    fscanf(ptr, "%c", &ch);

    printf("character  = %c\n", ch);
    fscanf(ptr, "%c", &ch);

    printf("character  = %c\n", ch);
    fscanf(ptr, "%c", &ch);

    printf("character  = %c\n", ch);
    fscanf(ptr, "%c", &ch);

    printf("character  = %c\n", ch);
    fscanf(ptr, "%c", &ch);
    
    fclose(ptr);
    return 0;
}