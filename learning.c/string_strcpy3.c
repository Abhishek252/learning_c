#include<stdio.h>
#include<string.h>
int main()
{
    char state1[] = "UTTER PRADESH";
    char state2[20] ;
    strcpy(state2,state1);
    printf("The first string is UTTER PRADESH\n");
    printf("The first string is Empty\n");
    printf("The coping string from string 1 to string 2 gives =%s\n", state2);
    return 0;
}