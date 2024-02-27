#include<stdio.h>
enum month
{
    JAUAREY,
    FEBUARY,
    MARCH,
    APIRL,
    MAY,
    JUN,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
int main()
{
    enum month myVar = FEBUARY;

    switch(myVar)
    {
    case 1:
        printf("JANUARY\n");
    case 2:
        printf("FEBUARY\n");
    case 3:
        printf("MARCH\n");
    case 4:
        printf("APIRL\n");
    case 5:
        printf("may\n");
    case 6:
        printf("JUN\n");
    case 7:
        printf("JULY\n");
    case 8:
        printf("AUGUST\n");
    case 9:
        printf("SEPTEMBER\n");
    case 10:
        printf("OCTOBER\n");
    case 11:
        printf("NOVEMBER\n");
    case 12:
        printf("DECEMBER\n");
    }
    return 0;
}
