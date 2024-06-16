#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    int roll;
    char name[100];
};

int main()
{
    struct student BCA[100];

    BCA[0]. id= 7;
    BCA[0]. roll = 12;
   strcpy( BCA [0].name, "manshi");

   printf("BCA Student Id = %d\n", BCA[0].id) ;
   printf("BCA Student Roll = %d\n", BCA[0].roll) ;
   printf("BCA Student Name = %s\n", BCA[0].name) ;

   struct student IT[100];

   IT[1].id = 8;
   IT[1].roll = 13;
  strcpy( IT[1].name, "sakshi");

  printf("IT Student Id = %d\n", IT[1].id);
  printf("IT Student roll = %d\n", IT[1].roll);
  printf("IT Student name = %s\n", IT[1].name);

  struct student COE[100];

  COE[2]. id=9;
  COE[2]. roll=14;
 strcpy( COE[2].name, "mahi");

  printf("COE Student Id = %d\n", COE[2]. id);
  printf("COE Student Roll = %d\n", COE[2]. roll);
  printf("COE Student Name = %s\n", COE[2]. name);

  return 0;
   



}