#include<stdio.h>
#include<string.h>
int main()
{
    char str[10], ch;
    int i,j,n,count;
    printf("Enter a string:");
    scanf("%s", str);
    for(i=0; i<n; i++)
    {
        ch = str[i];
        if(ch!= ' ')
        {
            count =0; 
            for(j=0; j<n; j++)
            {
                if(ch == str [j])
                {
                    count ++;
                    str[j]= ' ';

                }
            }
            printf("%c occurs %d times \n", ch, count);

        }

    }
    return 0;
}