#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;

} piyush, ravi, reya;
void print()
{
    printf("%s",piyush.name);
    printf("%s",reya.name);
    printf("%s",ravi.name);


}
int main()
{
    piyush.id = 1;
    reya.id = 2;
    ravi.id = 3;
    piyush.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    piyush.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav = 'o';


    print();
    'return0';



}

