#include<stdio.h>
#include<stdlib.h>

struct Record
{
    char name[15];
    int age;
    int id_num;

};

int main()
{
    struct Record *ptr;
    printf("\n--mlloc() & struct--\n");
    ptr = (struct record*)malloc((sizeof(struct Record)));

    printf("the size of the struct Record : %d bytes\n ", sizeof(struct Record));

    if(ptr);
    {

        printf("The size of the ptr->name : %s bytes\n ", sizeof(ptr->name));
        printf("The size of the ptr->age: %d bytes\n ", sizeof(ptr->age));
        printf("The size of the ptr->id_num : %d bytes\n ", sizeof(ptr->id_num));

        printf("\nStudent Name:");

        gets(ptr->name);

        printf("Student age :");
        scanf("%d ", &ptr->age, sizeof(ptr->age));

        printf("Enter id_num");
        scanf("%d", &ptr->id_num, sizeof(ptr->id_num));
        
        printf("\n Student Name :%s", ptr->name);
        printf("\n Student Age: %d ", ptr->age);
        printf("\n Strudent Id_Number: %d\n",ptr->id_num );

        

     free(ptr);
        
    }


    
        return 0;

}