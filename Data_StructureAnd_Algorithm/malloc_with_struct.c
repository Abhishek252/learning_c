#include<stdio.h>
#include<stdlib.h>

struct Manager
{
    char name[20];
    int age;
    int id_num;
};
int main()
{
    struct Manager *m;
   
   m =(struct Manager*)malloc(sizeof(struct Manager));

   printf("The size of bytes struct Manager :%d bytes\n ", sizeof(struct Manager));

   if(m)
   {

    printf("the size of the m->name: %d\n", sizeof(m->name));
    printf("the size of the m->age: %d\n", sizeof(m->age));
    printf("the size of the m->id_num: %d\n", sizeof(m->id_num));

    printf("\n student name");
    scanf("%s", m->name);
    printf("\n student age");
    scanf("%d", &m->age);
    printf("\n student id_num");
    scanf("%d", &m->id_num);

     printf("student name : %s\n", m->name);
     printf("student age:  %d", m->age);
     printf("student id_num: %d", m->id_num);

     free(m);

   }
   else{
    printf("\n Memory Allocation \n");

   }

   return 0;


}