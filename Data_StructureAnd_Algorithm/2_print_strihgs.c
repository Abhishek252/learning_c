#include<stdio.h>
int main()
{
    char a[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char a2[] = "Himanshi "; 
    printf("%c", a[0]);
    printf("%c", a[1]);
    printf("%c", a[2]);
    printf("%c", a[3]);
    printf("%c", a[4]);
    printf("%c", a[5]);

    printf("%s\n", a2);
    return 0;

}