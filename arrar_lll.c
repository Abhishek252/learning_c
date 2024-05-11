#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    //bool cheakMatching;
    char arr[] = {'(','{','}',')'};
    int i;
    char cheakMatching;
    for(int i = 0; i< 4; i++)
    {

        printf("%c", arr[i]);
    }

    if(cheakMatching(arr))

    {
        printf("Matching\n");

    }else

    {
        printf("Not Matching\n");
    }

    getch();
    return 0;


}
