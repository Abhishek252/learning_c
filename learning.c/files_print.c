#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("simple1.txt", "r");
    char ch;

    fscanf(ptr, "%c", &ch );
    printf("%c\n", ch);

    fscanf(ptr, "%c", &ch );
    printf("%c\n", ch);

    fscanf(ptr, "%c", &ch );
    printf("%c\n", ch);

    fscanf(ptr, "%c", &ch );
    printf("%c\n", ch);

    fscanf(ptr, "%c", &ch );
    printf("%c\n", ch);

    fscanf(ptr, "%c", &ch );
    printf("%c\n", ch);



}