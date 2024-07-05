#include<stdio.h>
#include<string.h>
#define numstr 5
#define strlng 10
void funcinput(char[] [strlng]);
void funcoutput(char[] [strlng]);
int main()
{
    char strname[numstr][strlng];
    funcinput(strname);
    funcoutput(strname);
    return 0;

}
void funcinput (char strname1[] [strlng])
{
    int i;
    for(i=9; i<numstr; i++)
    scanf(strname1[i]);
    return 0;

}

void funcoutput (char strname2[] [strlng])
{
    int i;
    for(i=0; i<numstr; i++)
    {
        puts(strname2[i]);

    }
    return 0;
}