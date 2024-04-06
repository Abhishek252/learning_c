#include<stdio.h>
#include<string.h>

struct picachu{

    int hp;
    int speed;
    int attack;
    char name[30];
    char tier;

};

int main(){

    struct picachu p1;
    struct picachu *pi;
    struct picachu arr[100];
    pi = &p1;

    p1.hp = 23;
    p1.speed = 200;
    p1.attack = 64;
    strcpy(p1.name, "ruhi");
    p1.tier = 'A';

    arr[0].hp = 34;
    arr[0].speed = 100;
    arr[0].attack = 60;
    strcpy(arr[0].name, "urvi");
    arr[0].tier = 'M';

    // structure
    
    printf("Details of structure\n");
    printf("picachu hp %d\n", p1.hp);
    printf("picachu speed %d\n", p1.speed);
    printf("picachu attack %d\n", p1.attack);
    printf("picachu name %s\n", p1.name);

    //pointer with structure
      
    printf("Dtails of pointer\n");  
    printf("picachu hp with pointer : %d\n", pi->hp);
    printf("picachi speed with pointer : %d\n", pi->speed);
    printf("picachu attack with pointer : %d\n", pi->attack);
    printf("picachu name with pointer : %s\n", pi->name);
    printf("picachu tier with pointer : %c\n", pi->tier);


    //array with structure

    printf("Details of array\n");
    printf("picachu hp : %d\n", arr[0].hp);
    printf("picachu speed : %d\n", arr[0].speed);
    printf("picachu attack : %d\n", arr[0].attack);
    printf("picachu name %s\n :", arr[0]. name);
    printf("picachu tier : %c\n", arr[0].tier);

    return 0;
    
}


