#include<stdio.h>
#include<string.h>
int main()
    {
        char  name[] = "Manshi";
        char *p;
        p= name;
        int i, l;
        l= strlen(name);
       // for(i=0; i<l; i++)
        {
          // printf("%c\n",*(p+i) );

            printf("%s\n", p);
        }

        return 0;

    }