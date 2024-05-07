#include<stdio.h>
#include<string.h>
int main()
{
    char Vowel[] = { 'A','E', 'I', 'O', 'U', '\0'};
    char Vowel2[] = "AEIOU";
    printf("%d\n", strlen(Vowel));
    printf("%d\n", sizeof(Vowel));
    return 0;

}