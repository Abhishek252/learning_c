#include<stdio.h>
#include<string.h>

struct Picomon{

    int hp;
    int speed;
    char name[40];
    char tier ;

};

int main()
{
    struct Picomon P1;
    P1.hp = 60;
    P1.speed = 100;
    strcpy(P1.name, "Picachu");
    P1.tier = 'A';
    

    printf("Picomon hp %d\n", P1.hp);
    printf("Picachu speed %d\n", P1.speed);
    printf("Picachu name %s\n", P1.name);
    printf("Picachu tier %c\n", P1.tier );
    return 0;

}