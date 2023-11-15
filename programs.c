#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1, j, c;
    printf("\n prime numbers Are Following\n");
    while(i<=200)
    {
        c=0;
        for(j=1; j<=i;j++)
        {
            if(i%j==0)
                c++;
            if(c==2)
                printf("%d",i);
            i++;
        }

    }
    getch();

}
