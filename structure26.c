#include<stdio.h>


struct time
{

    int hourse;
    int second;
    int minute;

};

int main()
{

    struct time t1, t2;
    printf("Enter hourse");
    scanf("%d", &t1.hourse);
    printf("Enter second");
    scanf("%d", &t1.second);
    printf("Enter minute");
    scanf("%d",&t1.minute);

    printf("Enter hourse");
    scanf("%d", &t2.hourse);
    printf("Enter second");
    scanf("%d", &t2.second);
    printf("Enter miute");
    scanf("%d", &t2.minute);

    printf("time details");
    printf("\n %d", t1.hourse);
    printf("\n %d", t1.second);
    printf("\n %d", t1.minute);

    printf("\n %d:", t2.hourse);
    printf("\n %d:", t2.second);
    printf("\n %d:", t2.minute);
    return 0;
}
