#include<stdio.h>
enum colour
{
    RED,
    WHITE,
    GREEN,
    YELLOW,
    ORANGE,
    BLUE,
    BLACK,
    SKY_BLUE,
    PINK

};
int main()
{
    enum colour x=WHITE;

    switch (x)
    {
    case 1:
        printf("RED\n");

    case 2:
        printf("WHITE\n");
    case 3:
        printf("YELLOW\n");
    case 4:
        printf("GREEN\n");
    case 5:
        printf("ORANGE\n");
    case 6:
        printf("BLUE\n");
    case 7:
        printf("BLACK\n");
    case 8:
        printf("SKY_BLUE\n");
    case 9:
        printf("PINK\n");

    }
    return 0;
}
