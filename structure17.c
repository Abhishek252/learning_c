#include<stdio.h>

struct employee
{
    int code;
    char name[50];
    float salary;
};

int main()
{

    struct employee a[10];
    int i, k, f, pos;
    for(i =0; i<10; i++)
    {
        printf(" Enter code");
        scanf("%d", &a[i].code);
        printf("enter name");
        scanf("%s", a[i].name);
        printf("enter salary");
        scanf("%f", &a[i].salary);

    }
    printf("Enter employee code to search");
    scanf("%d", &k);
    for(i=0; i<10; i++)
    {
        if(a[i].code == k)
        {
            f =1;
            pos = i;
            break;
        }
    }
    if(f == 1)
    {
        printf("\n code =%d",a[pos].code);
        printf("\n name =%s",a[pos].name);
        printf("\n salary =%f",a[pos].salary);

    }
    else
    {
        printf("\n search value not found");
    }
    return 0;


}
