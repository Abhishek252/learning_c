#include<stdio.h>
enum Week
{
    Sunday =1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};
int main()
{
    enum Week x= Friday;
    printf("%d",Friday);
    return 0;
}
