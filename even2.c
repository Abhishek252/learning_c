#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character");
    scanf("%c\n",&x);
    if(x>= 'A' && x<= 'Z')
    {
        printf("Uppercase Alphabet");

    }
    else if(x>= 'a'&& x<= 'z' )
    {
        printf("Digit");
    }
    else
    {
        printf("special character");
    }
    return 0;


}

