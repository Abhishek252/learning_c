#include<stdio.h>
#include<string.h>

struct date{

    int d , m , y;
};
struct date inputDate();
void showDate(struct date);
int main()
{   
    struct date dob[4];
    int i;
    printf("Enter date of birth four stdudent\n ");
    for(i=0; i<=3; i++)
        dob[i] = inputDate();
   // struct date d1;
   // d1 = inputDate();
    showDate(dob[i]);
    printf("\n");
    return 0;
}

void showDate(struct date somedate)
{
    printf("\n%d-%d-%d", somedate.d, somedate.m, somedate.y);

}
struct date inputdate()
{
    struct date somedate;
    printf("\n Enter Date");
    scanf("%d/%d/%d",&somedate.d,&somedate.m,&somedate.y);
    return somedate;
}
