#include<stdio.h>
enum Level
{
    LOW = 1,
    MEDTUM,
    HIGH

};

int main(){
    enum Level myVar = MEDIUM;
switch (myVar)
{
case 1:
    printf("Low level");
    break;
case 2:
    printf("Medium Level");
    break;
case 3:
    printf("High level");
    break;

}
  'return0';
}

