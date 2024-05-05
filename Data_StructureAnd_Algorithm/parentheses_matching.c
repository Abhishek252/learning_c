#include<stdio.h>
int main()
{
    char arr[] = {'(','{','}',')',};
    
    arr[0] = '(';
    arr[1] = '{';
    arr[2] = '}';
    arr[3] = ')';
    

    for(int i = 0; i<4; i++)
    {
       printf("%c",arr[i]);
      //  printf("%lu", sizeof(arr));

    }
    if(arr[0]== '('&& arr[1]== '{' && arr[2]== '}' && arr[3] == ')')// && arr [4] == ']' )
    {
        printf("it's matching\n");
    }
    else
    {
        printf("it's not matching");
    }
    return 0;

}