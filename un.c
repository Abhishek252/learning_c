#include<stdio.h>
#include<string.h>
union student
{
    int id;
    float fee;
    char name[30];

};
int main()
{
    union student s1;
    s1.id = 54;
    printf("s1 id: %d\n",s1.id);
    s1.fee = 75.5;
    printf("s1 fee: %f\n",s1.fee);
    strcpy(s1.name,"piyush");
    printf("s1 name: %s\n",s1.name);
    return 0;

}
