#include<stdio.h>


struct name
{
    char first[10];
    char second[10];
    char last[10];
};

struct b_date
{
    int day;
    int month;
    int year;


};

struct data
{
    struct name nm;
    struct b_date bt;

};

int main()

{
     struct data r1;

printf("\n Enter name (First/ second/last )\n");
scanf("%s %s %s", r1.nm.first, r1.nm.second, r1.nm.last);

printf("\n Enter Birth Date  Day-Month- Year-n");
 
 scanf("%d- %d -%d", &r1.bt.day, &r1.bt.month, &r1.bt.year);

 printf("Name : %s %s %s\n ", r1.nm.first, r1.nm.second, r1.nm.last);
 printf(" Birth Date : %d %d %d\n ", r1.bt.day, r1.bt.month, r1.bt.year);
 return 0;

}


