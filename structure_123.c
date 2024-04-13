#include<stdio.h>
#include<string.h>

struct date{

    int day;
    int month;
    int year;
    
};

int main(){
    
    struct date d1;
    struct date *dt;
    dt = &d1;

    d1.day = 23;
    d1.month = 12;
    d1.year = 2006;

    printf("%d\n",dt->day );
    printf("%d\n", dt->month);
    printf("%d\n", dt->year);

   // printf("day %d\n", d1.day);
   // printf("month %d\n", d1.month);
   // printf("year %d\n", d1.year);
   // return 0;
}