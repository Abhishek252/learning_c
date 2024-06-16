#include<stdio.h>
#define MAX 5

int main()
{
    struct student {

        char name[20];
        long int rollno;
        int age;
        char sex;
        float height;
        float weight;

    };

    static struct student class[MAX]={
        {"piyush , 91001, 25, 'M',  175.55,  56.7 "},
        {"ritika , 91002, 26, 'F'  ,167.56, 67.7 "},
        {"agrima , 91003, 25, 'F', 180.2, 80.8 "},
        {"ravi , 91004, 24, 'M', 167.8 , 40.0 "}
        
    };


    int i;
    printf("Contents of structure\n");

    for(i=0; i<MAX;i++ )
    {
        printf("Name :%s\n", class[i].name);
        printf("Rollno :%d\n", class[i].rollno);
        printf("Age :%d\n", class[i].age);
        printf("Sex :%c\n", class[i].sex);
        printf("Height :%f\n", class[i].height);
        printf("Weight :%f\n", class[i].weight);
        
        printf("\n");
        

    }

}