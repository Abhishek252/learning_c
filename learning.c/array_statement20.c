#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[5];
    for(int i = 0; i<5; i++)
    {
        printf("the value of marks for student %d:", i+1);
        scanf("%d", &marks[i]);
    }

        for(int i = 0; i<5; i++)
        {
            printf("the value of marks forstudent %d is:%d\n", i+1, marks[i]);
        }
        getch();
        return 0;
    
}