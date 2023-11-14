#include<stdio.h>
#include<conio.h>
void main()
{
    int name;

    printf("Enter your name");
    scanf("%d", &name);
    switch(name)
    {
        case 'A':
        printf("My name is : Ram");
        break;
        case 'B':
        printf("My name is : shyam");
        break;
        case 'C':
        printf("My name is : Krishna");
        break;
        default :
            printf("invalid name");
            break;
    }
    getch();


}
