#include<stdio.h>

struct date
{

    int day;
    int month;
    int year;

};

int main(){

    struct date d1 = {30 , 11, 1996};
    struct date *p;
    p = &d1;
    
    printf("day : %d\n", (*p).day);
    printf("month : %d\n", (*p).month);
    printf("year : %d\n", (*p).year);

    printf("day : %d\n", p->day);
    printf("month : %d\n", p->month);
    printf("year : %d\n", p->year);
    return 0;

}

