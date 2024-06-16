#include<stdio.h>
typedef struct Fruits
{

    float big;
    float medium;
    float small;
} weight;

int main()
{
    weight apples  = {200.75, 145.5, 100.25};
    weight pears = {150.50, 125,50};
    weight mangoes = {1000, 567.25, 360.25};

    printf("\n\n apples: big %7.2fkg,   medium   %7.2fkg,    small   %7.2fkg",  apples.big, apples.medium, apples.small);
    printf("\n\n pears: big %7.2fkg,   medium   %7.2fkg,    small   %7.2fkg",  pears.big, pears.medium, pears.small);
    printf("\n\n mangoes: big %7.2fkg,   medium   %7.2fkg,    small   %7.2fkg",  mangoes.big, mangoes.medium, mangoes.small);


    return 0;  
}

