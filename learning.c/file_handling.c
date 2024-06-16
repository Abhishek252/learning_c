#include<stdio.h>
int main()
{
    FILE *p;
    // p = fopen("test.txt", "r");
    // char c = fgetc(p);
    // printf("the chracter I read was %c\n", c);

    // c =fgetc(p);
    // printf("the chracter I read was %c\n", c);
    // fclose(p);



    char str[20];
    fgets(str, 10, p);
    printf("the string is %s\n", str);
    fclose(p);
    return 0;
}