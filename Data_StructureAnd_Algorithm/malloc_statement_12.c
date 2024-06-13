#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    int age;
    int id_num;

};

int main()
{
    struct student *s;
    s = (struct student*)malloc((sizeof(struct student)));

    printf("The size of the sruct student :%d bytes\n ", sizeof(struct student ));

     if(s) 
     {

        printf("the size of the s->name :%d bytes\n", sizeof(s->name));
        printf("the size of the s->age :%d bytes \n ", sizeof(s->age));
        printf("the size of the s->id_num :%d bytes\n", sizeof(s->id_num));

        printf("\n Student name:");
        scanf("%s", &s->name, sizeof(s->name));

        printf("\n Student Age :");
        scanf("%d", &s->age, sizeof(s->age));

        printf("\n Student Id_Num:");
        scanf("%d", &s->id_num, sizeof(s->id_num));

        printf("\n Student Name:%s",s->name );
        printf("\n Student Age:%d", s->age);
        printf("\n Student Id_Number:%d", s->id_num);
      
      free(s);

    }
    else{
        printf("\n Memory Allocation Fail !!!\n");
    }

    return 0;


}