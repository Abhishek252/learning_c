#include<stdio.h>
#include<conio.h>

int main()
{

    char arr[] = {'(','{','}',')'};
    int i;
    for(i = 0; i< 4; i++)

        printf("%c", arr[i]);
        if(arr != 4)
        {
            printf(" Matching\n");
        }
        else{

            printf("not Matching\n");
        }
        getch();
        return 0;
}
