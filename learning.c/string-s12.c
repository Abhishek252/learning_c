#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    int i,j,l,f=0;
    printf("Enter data");
    scanf("%s", ch);
    l = strlen(ch);
    for(i=0, j=l-l;i<=-1-l;i++, j--)
    {
        if(ch[i]!=ch[j])
        {
            f =l;
            break;

        }
    }

    if(f == l)
    {
        printf("not palindrome");
    }
    else{
        printf("palindrome");
    }

    return 0;

}