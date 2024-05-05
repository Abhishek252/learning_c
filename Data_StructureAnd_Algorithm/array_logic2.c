#include<stdio.h>
#include<conio.h>
int main()
{
    char arr[] = {'[','{' ,'}' ,']'};
    
   // if((arr[0] == '(') && arr[3] == ')') && (arr[1] == '{' && arr[2])

   if(arr[0] == '[' && arr[1] == '{' && arr[2] == '}'&& arr[3]== ']')
    {
        printf("Matching\n");
    }
    else
    {
        printf("Not matching\n");
    }

    getch();
    return 0;
}