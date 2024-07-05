#include<stdio.h>
#include<stdio.h>
int main()
{
    char name[20];
    char name2[20];
    printf("Enter first name");
    scanf("%s", name);
    printf("Enter second name:");
    scanf("%s", name2);

    printf("Reverse name first name = %s\n", strrev(name));
    printf("Reverse name first name = %s\n", strrev(name2));
    return 0;

}
