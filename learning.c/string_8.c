#include<stdio.h>
void lower_string(char*);
int main()
{
    char string[100];
    printf("enter a string in uppercase\n");
    gets(string);
    lower_string(string);
    printf("enter a string in lower case is %s\n", string);
    return 0;

}

void lower_string(char*string)
{
    while(*string)
    {
        if(*string >='A'&& *string <='Z')
        {
            string = *string+32;

        }
        string++;
    }
    
    return 0;
}