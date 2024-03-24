#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[] = {'H', 'i', 'm', 'a', 'n', 's', 'h', 'i', '\0'};
    char name1[] = "Himanshi";
    printf("%s\n", name);
    printf("%s\n", name1);
    printf("Length is %d\n", strlen(name));
    printf("size is %d", sizeof(name));
    return 0;
}
